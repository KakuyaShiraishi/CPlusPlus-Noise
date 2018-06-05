#pragma once

#ifdef NOISE_USE_GLM

#define NOISE_BEGIN_NAMESPACE namespace noise {
#define NOISE_END_NAMESPACE }

#define NOISE_INLINE inline

#define GLM_SWIZZLE
#define GLM_PRECISION_HIGHP_FLOAT
#define GLM_FORCE_INLINE
	
#include <glm/fwd.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/scalar_multiplication.hpp>

NOISE_BEGIN_NAMESPACE

typedef glm::vec2 vec2;
typedef glm::vec3 vec3;
typedef glm::vec4 vec4;

using glm::dot;
using glm::max;
using glm::floor;
using glm::clamp;
using glm::mix;
using glm::step;

NOISE_END_NAMESPACE

#else

#define NOISE_BEGIN_NAMESPACE
#define NOISE_END_NAMESPACE
#define NOISE_INLINE

#error
#endif