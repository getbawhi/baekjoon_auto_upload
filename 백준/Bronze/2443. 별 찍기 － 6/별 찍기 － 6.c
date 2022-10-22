#include <stdio.h>
#include <time.h>

int main() {

	int n;
	int mid = 0;
	int max = 0;
	int cnt = 1;

	scanf("%d", &n);

	max = (n * 2) - 1;

	mid = (max / 2) + 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf(" ");
		}

		for (int jj = 1; jj <= max; jj++)
		{

			printf("*");
		}
		
		max = max-2;
		printf("\n");
	}

	return 0;
}