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
		for (int j = mid - 1-i; j > 0; j--)
		{
			printf(" ");
		}

		for (int jj = 1; jj <= cnt; jj++)
		{

			printf("*");
		}
		
		cnt = cnt + 2;
		printf("\n");
	}

	return 0;
}