#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);



	int star = 0;
	int space = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i-1; j > 0; j--)
		{
			printf(" ");
		}

		for (int x = 0; x < star+1; x++)
		{
			printf("*");
		}
		printf("\n");

		star += 2;

	}

	star = n * 2 - 1;

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			star -= 2;
			continue;
		}
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}

		for (int x = 0; x < star; x++)
		{
			printf("*");
		}
		printf("\n");
		star -= 2;
	}

	return 0;
}