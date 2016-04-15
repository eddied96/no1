#include "stdafx.h"
#include "stdio.h"
#include <stdarg.h>
#include "string.h"
#pragma warning(disable: 4996)

void sortStrings(int numStrings, char*strings[]);
void writeToFile(int numStrings, char *filename, char*strings[]);

int main(int argc, char *argv[])
{

	sortStrings(argc, argv);
	writeToFile(argc, argv[1], argv);
	return 0;
}

void sortStrings(int numStrings, char*string[])
{
	int j = 0;
	int ctr;
	int k = 0;
	char *temp;


	for (ctr = 2; ctr < numStrings; ctr++)
	{
		for (k = 2; k < numStrings - 1; k++)
		{
			if (strcmp(string[k], string[k + 1])> 0)
			{
				temp = string[k];
				string[k] = string[k + 1];
				string[k + 1] = temp;
			}
		}
	}

	printf("Sorted Words:\n");
	for (j = 2; j < numStrings; j++)
	{
		printf("%s\n", string[j]);
	}
	printf("\n---End of list---\n\n");
}


void writeToFile(int numStrings, char *filename, char*string[])
{
	int ctr2 = 0;
	FILE*fptr;
	fptr = fopen(filename, "w+");
	for (ctr2 = 2; ctr2 < numStrings; ctr2++)
	{

		fprintf(fptr, "%s\n", string[ctr2]);

	}

}