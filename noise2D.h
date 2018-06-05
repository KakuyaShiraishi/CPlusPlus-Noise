
#pragma once

#include <noise/platform.h>
#include <noise/noise_common.h>

#include <noise/platform_glm_define.h>

NOISE_BEGIN_NAMESPACE

NOISE_INLINE float snoise(vec2 v)
{
	const vec4 C = vec4(0.211324865405187,  // (3.0-sqrt(3.0))/6.0
		0.366025403784439,  // 0.5*(sqrt(3.0)-1.0)
		-0.577350269189626,  // -1.0 + 2.0 * C.x
		0.024390243902439); // 1.0 / 41.0
							// First corner
	vec2 i = floor(v + dot(v, C.yy));
	vec2 x0 = v - i + dot(i, C.xx);

	// Other corners
	vec2 i1;
	//i1.x = step( x0.y, x0.x ); // x0.x > x0.y ? 1.0 : 0.0
	//i1.y = 1.0 - i1.x;
	i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);
	// x0 = x0 - 0.0 + 0.0 * C.xx ;
	// x1 = x0 - i1 + 1.0 * C.xx ;
	// x2 = x0 - 1.0 + 2.0 * C.xx ;
	vec4 x12 = x0.xyxy + C.xxzz;
#ifdef NOISE_USE_GLM
	x12.x -= i1.x;
	x12.y -= i1.y;
#else
	x12.xy -= i1;
#endif
	
	// Permutations
	i = mod289(i); // Avoid truncation effects in permutation
	vec3 p = permute(permute(i.y + vec3(0.0, i1.y, 1.0))
		+ i.x + vec3(0.0, i1.x, 1.0));

	vec3 m = max(vec3(0.5) - vec3(dot(x0, x0), dot(x12.xy, x12.xy), dot(x12.zw, x12.zw)), vec3(0.0));
	m = m*m;
	m = m*m;

	// Gradients: 41 points uniformly over a line, mapped onto a diamond.
	// The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

	vec3 x = 2.0f * fract(p * C.www) - vec3(1.0f);
	vec3 h = abs(x) - vec3(0.5f);
	vec3 ox = floor(x + vec3(0.5f));
	vec3 a0 = x - ox;
	
	// Normalise gradients implicitly by scaling m
	// Approximation of: m *= inversesqrt( a0*a0 + h*h );
	m *= vec3(1.79284291400159f) - 0.85373472095314f * (a0*a0 + h*h);

	// Compute final noise value at P
	vec3 g;
	g.x = a0.x  * x0.x + h.x  * x0.y;
	
#ifdef NOISE_USE_GLM
	g = vec3(g.x, a0.yz * x12.xz + h.yz * x12.yw);
#else
	g.yz = a0.yz * x12.xz + h.yz * x12.yw;
#endif

	return 130.0 * dot(m, g);
}


NOISE_END_NAMESPACE

#include <noise/platform_glm_undef.h>