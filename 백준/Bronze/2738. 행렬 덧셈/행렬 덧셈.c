#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cnt = 0;
	int N, M;
	int S;
	int mat[10000];
	int mat2[10000];

	scanf("%d %d", &N, &M);

	S = N * M;



	for (int i = 0; i < S; i++)
	{
		scanf("%d", &mat[i]);
	}

	for (int i = 0; i < S; i++)
	{
		scanf("%d", &mat2[i]);
	}

	for (int i = 0; i < S; i++)
	{
		mat[i] = mat[i] + mat2[i];
	}

	for (int i = 0; i < S; i++)
	{
		printf("%d ", mat[i]);
		cnt++;

		if (cnt ==M)
		{
			printf("\n");
			cnt = 0;
		}
	}

	

	return 0;
}