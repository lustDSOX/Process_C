#include "Header.h"
int main(int argc, char* argv[]) {
	system("chcp 1251>nul");
	char* TEXT = "0;2;-1;answer.txt;";

	int size = 0;
	int count_r = 0;
	char* A = "";
	char* B = "";
	char* C = "";
	char* File = "";
	char* head = TEXT;
	while (*TEXT != '\0')
	{
		size++;
		if (*TEXT == ';') {
			switch (count_r)
			{
			case 0:
				A = calloc(size-1, 1);
				break;
			case 1:
				B = calloc(size-1, 1);
				break;
			case 2:
				C = calloc(size-1, 1);
				break;
			case 3:
				File = calloc(size, 1);
				break;
			}
			count_r++;
			size = 0;
		}
		TEXT++;
	}
	TEXT = head;
	size = 0;
	count_r = 0;
	while (*TEXT != '\0')
	{
		if (*TEXT == ';') {
			count_r++;
			size = 0;
			continue;
		}
		switch (count_r)
		{
		case 0:
			A[size] = *TEXT;
			break;
		case 1:
			B[size] = *TEXT;
			break;
		case 2:
			C[size] = *TEXT;
			break;
		case 3:
			File[size] = *TEXT;
			break;
		}
		size++;
		TEXT++;
	}
	//double a = atof(a);
	//double b = atof(argv[0][1]);
	//double c = atof(argv[0][2]);
	//float x1, x2, discriminant;
	//FILE* answer = fopen(p, "w+t");
	//discriminant = powf(b, 2.0) - 4 * a * c;
	printf("%s\n%s\n%s\n%s\n",A,B,C,File);
	//printf("%d\n%d\n%d\n",a,b,c);
	/*if (discriminant < 0 || a == 0)
	{
		fprintf(answer, "1");
	}
	if (discriminant == 0)
	{
		x1 = (-b) / (2 * a);
		fprintf(answer, "2");
	}
	if (discriminant > 0)
	{
		x1 = ((-b) - sqrt(discriminant)) / (2 * a);
		x2 = ((-b) + sqrt(discriminant)) / (2 * a);
		fprintf(answer, "2");
	}*/
	return 0;
}