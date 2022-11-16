#include "Header.h"
int main(int argc, char* argv[]) {
	char* buf = strtok(argv[0], ";");
	char* A = buf;
	buf = strtok(NULL, ";");
	char* B = buf;
	buf = strtok(NULL, ";");
	char* C = buf;
	buf = strtok(NULL, ";");
	char* p = buf;
	double a = atof(A);
	double b = atof(B);
	double c = atof(C);
	float x1, x2, discriminant;
	FILE* answer = fopen(p, "w+t");
	discriminant = powf(b, 2.0) - 4 * a * c;
	fprintf(answer,"a = %f	b = %f	c = %f\n\n",a,b,c);
	if (discriminant < 0 || a == 0)
	{
		fprintf(answer, "Решения нет");
	}
	else if (discriminant == 0)
	{
		x1 = (-b) / (2 * a);
		fprintf(answer, "D = %f\nx1 = %f",discriminant, x1);
	}
	else if (discriminant > 0)
	{
		x1 = ((-b) - sqrt(discriminant)) / (2 * a);
		x2 = ((-b) + sqrt(discriminant)) / (2 * a);
		fprintf(answer, "D = %f\nx1 = %f	x2 = %f",discriminant, x1, x2);
	}
	return 1;
}