#pragma once

NOISE_BEGIN_NAMESPACE

NOISE_INLINE float mod289(float x) {
	return x - floor(x * (1.0f / 289.0f)) * 289.0f;
}

NOISE_INLINE vec2 mod289(vec2 x) {
	return x - floor(x * (1.0f / 289.0f)) * 289.0f;
}

NOISE_INLINE vec3 mod289(vec3 x) {
	return x - floor(x * (1.0f / 289.0f)) * 289.0f;
}

NOISE_INLINE vec4 mod289(vec4 x) {
	return x - floor(x * (1.0f / 289.0f)) * 289.0f;
}

NOISE_INLINE float permute(float x) {
	return mod289(((x*34.0f) + 1.0f)*x);
}

NOISE_INLINE vec3 permute(vec3 x) {
	return mod289(((x*34.0f) + vec3(1.0f))*x);
}

NOISE_INLINE vec4 permute(vec4 x) {
	return mod289(((x*34.0f) + vec4(1.0f))*x);
}

NOISE_INLINE float taylorInvSqrt(float r)
{
	return 1.79284291400159f - 0.85373472095314f * r;
}

NOISE_INLINE vec4 taylorInvSqrt(vec4 r)
{
	return vec4(1.79284291400159f) - 0.85373472095314f * r;
}

NOISE_INLINE vec2 fade(vec2 t) {
	return t*t*t*(t*(t*6.0f - vec2(15.0f)) + vec2(10.0f));
}

NOISE_INLINE vec3 fade(vec3 t) {
	return t*t*t*(t*(t*6.0f - vec3(15.0f)) + vec3(10.0f));
}

NOISE_INLINE vec4 fade(vec4 t) {
	return t*t*t*(t*(t*6.0f - vec4(15.0f)) + vec4(10.0f));
}

NOISE_INLINE vec4 grad4(float j, vec4 ip)
{
	const vec4 ones = vec4(1.0f, 1.0f, 1.0f, -1.0f);
	vec4 p, s;

	p.xyz = floor(fract(vec3(j) * ip.xyz) * 7.0f) * ip.z - vec3(1.0f);
	p.w = 1.5f - dot(abs(vec3(p.xyz)), vec3(ones.xyz));
	s = vec4(lessThan(p, vec4(0.0f)));
	p.xyz = p.xyz + (s.xyz*2.0f - vec3(1.0f)) * s.www;

	return p;
}

// (sqrt(5) - 1)/4 = F4, used once below
#define F4 0.309016994374947451f

NOISE_END_NAMESPACE