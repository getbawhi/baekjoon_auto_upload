#include <stdio.h>


int main() {

	int T, n, k;
	int cnt = 0;
	int ii = 0;
	int j = 0;
	int answer = 0;
	int cnt_n;
	int arr[15][15] = { 0 };

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			arr[i][j] = 0;
		}
	}

	scanf("%d", &T);
	
	while (cnt < T)
	{
		ii = 0;
		j = 0;

		scanf("%d", &k);
		scanf("%d", &n);

		cnt_n = n;

		for (int i = 0; i < n; i++)
		{
			arr[0][i] = i+1;
		}

		for (int i = 1; i <= k; i++)
		{

			while (ii <= j && j < n)
			{
				arr[i][j] = arr[i][j] + arr[i - 1][ii];
				ii++;
				answer = arr[i][j];

				if (ii > j)
				{
					j++;
					ii = 0;
				}

			}
			j = 0;
			ii = 0;
		}
		printf("%d\n", answer);
		cnt++;

		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				arr[i][j] = 0;
			}
		}
	}

	return 0;
}