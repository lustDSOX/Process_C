#include "Header.h"
main() 
{
	STARTUPINFO si = {0};
	PROCESS_INFORMATION pi = {0};
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	system("chcp 1251>nul");
	FILE* file;
	char a[3], b[3], c[3];
	int bool = 0;
	if ((file = fopen("1.txt", "r")))
	{
		fseek(file, 0, SEEK_END);
		long size = ftell(file);
		fseek(file, 0, SEEK_SET);
		char* text = calloc(size, 1);
		for (size_t i = 0; i < size; i++)
		{
			text[i] = fgetc(file);
		}
		for (size_t i = 0; i < size; i++)
		{
			if (text[i] == '\n') {
				bool = 1;
			}
			if (text[i] < -1 || text[i] >96) {
				printf("¬ведены не корректные данные");
				return 1;
			}
		}
		fseek(file, 0, SEEK_SET);
		if (bool == 1) {
			fscanf(file, "%s\n%s\n%s", &a, &b, &c);
		}
		else
		{
			fscanf(file, "%s %s %s", &a, &b, &c);
		}

	}
	char koef[50];
	snprintf(koef, sizeof koef, "%s%c%s%c%s%c%s%c", a,';', b, ';', c, ';', "answer.txt",';');
	int bo = CreateProcessA("C:\\Users\\ермолаевас\\source\\repos\\Project1\\x64\\Debug\\Project2.exe",&koef,NULL, NULL, FALSE, NULL, NULL, NULL, &si, &pi);
	WaitForSingleObject(pi.hProcess, INFINITE);
	DWORD dwCode;
	GetExitCodeProcess(pi.hProcess, &dwCode);
	return 0;
}
