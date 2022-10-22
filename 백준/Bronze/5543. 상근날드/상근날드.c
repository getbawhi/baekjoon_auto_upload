#include <stdio.h>


int main()
{
	int burger[3];
	int drink[2];

	int set[3][2];
	int min = 20000000;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &burger[i]);
	}

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &drink[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			set[i][j] = burger[i] + drink[j]-50;
		}

	}

	for (int i = 0; i < 3; i++)
	{
		if (set[i][0] < set[i][1])
		{
			set[i][0] = set[i][0];
		}

		else
		{
			set[i][0] = set[i][1];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (min > set[i][0])
		{
			min = set[i][0];
		}
	}

	printf("%d", min);

	return 0;
}