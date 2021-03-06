// CIS565 CUDA Rasterizer: A simple rasterization pipeline for Patrick Cozzi's CIS565: GPU Computing at the University of Pennsylvania
// Written by Yining Karl Li, Copyright (c) 2012 University of Pennsylvania

#ifndef RASTERIZEKERNEL_H
#define RASTERIZEKERNEL_H

#include <stdio.h>
#include <thrust/random.h>
#include <cuda.h>
#include <cmath>
#include "glm/glm.hpp"

#if CUDA_VERSION >= 5000
    #include <helper_math.h>
#else
    #include <cutil_math.h>
#endif

#define POINT_MODE 0
#define SHADING 1
#define RASTERIZE_MODE 0
#define SCANLINE 0
#define THREE 0
#define READ_NORMAL 0
#define COLOR 1
#define BFCULL 0
#define OOVIGNORE 0

void kernelCleanup();
void cudaRasterizeCore(uchar4* pos, glm::vec2 resolution, float frame, float* vbo, int vbosize, float* cbo, int cbosize, int* ibo, int ibosize, glm::mat4 MVP, glm::mat4 proj, glm::vec4 light);

#endif //RASTERIZEKERNEL_H
