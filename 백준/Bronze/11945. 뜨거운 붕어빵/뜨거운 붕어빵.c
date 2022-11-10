#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int x, y;
	scanf("%d %d", &y, &x);

	char** bread = (char**)malloc(sizeof(char*) * y);

	for (int i = 0; i < y; i++)
	{
		bread[i] = (char*)malloc(sizeof(char) * x);
	}

	for (int i = 0; i < y; i++)
	{
		scanf("%*c");
		for (int j = 0; j < x; j++)
		{
			scanf("%c", &bread[i][j]);
		}
	}
	

	for (int i = 0; i < y; i++)
	{
		for (int j = x-1; j >= 0; j--)
		{
			printf("%c", bread[i][j]);
		}
		printf("\n");
	}
	return 0;

}