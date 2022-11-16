#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include<Windows.h>
typedef struct Koefs {
	float a;
	float b;
	float c;
	FILE* file;
} Koefs;