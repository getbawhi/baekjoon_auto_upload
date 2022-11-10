#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);
	int tmp = n*2-1;

	int space = 0;

	for (int i = 0; i < n; i++)
	{
		for (int s = space; s > 0; s--)
		{
			printf(" ");
		}

		for (int j = 0; j < tmp; j++)
		{
			printf("*");
		}

		printf("\n");
		tmp = tmp - 2;
		space = space + 1;
	}

	tmp = 3;

	space = n-2;


	for (int i = 0; i < n-1; i++)
	{
		for (int s = space; s > 0; s--)
		{
			printf(" ");
		}

		for (int j = 0; j < tmp; j++)
		{
			printf("*");
		}

		printf("\n");
		space = space - 1;
		tmp = tmp + 2;
	}

}