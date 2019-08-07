#include "Common.h"

#define STB_PERLIN_IMPLEMENTATION
#include "stb_perlin.h"

float Extension::Noise(float x, float y, float z){
	return stb_perlin_noise3(x, y, z, 0, 0, 0);
}

float Extension::RidgeNoise(float x, float y, float z, float l, float g, float off, int o) {
	return stb_perlin_ridge_noise3(x, y, z, l, g, off, o);
}

float Extension::FbmNoise(float x, float y, float z, float l, float g, int o) {
	return stb_perlin_fbm_noise3(x, y, z, l, g, o);
}

float Extension::TurbulenceNoise(float x, float y, float z, float l, float g, int o) {
	return stb_perlin_turbulence_noise3(x, y, z, l, g, o);
}
