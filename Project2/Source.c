#include "Header.h"
int main(char* koefs) {
	system("chcp 1251>nul");
	char* p = strchr(koefs, ';');
	float x1, x2, discriminant;
	FILE* answer = fopen(p, "w+t");
	discriminant = powf(koefs[1], 2.0) - 4 * koefs[0] * koefs[2];
	if (discriminant < 0 || koefs[0] == 0)
	{
		fprintf(answer, "1");
	}
	if (discriminant == 0)
	{
		x1 = (-koefs[1]) / (2 * koefs[0]);
		fprintf(answer, "2");
	}
	if (discriminant > 0)
	{
		x1 = ((-koefs[1]) - sqrt(discriminant)) / (2 * koefs[0]);
		x2 = ((-koefs[1]) + sqrt(discriminant)) / (2 * koefs[0]);
		fprintf(answer, "2");
	}
}