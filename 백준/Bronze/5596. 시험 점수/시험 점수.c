#include <stdio.h>


int main()
{
	int s1[4];
	int s2[4];

	int result1 = 0, result2 = 0;

	scanf("%d %d %d %d", &s1[0], &s1[1], &s1[2], &s1[3]);
	scanf("%d %d %d %d", &s2[0], &s2[1], &s2[2], &s2[3]);

	for (int i = 0; i < 4; i++)
	{
		result1 = result1 + s1[i];
		result2 = result2 + s2[i];
	}

	if (result1 > result2)
	{
		printf("%d", result1);
	}

	else if (result1 < result2)
	{
		printf("%d", result2);
	}

	else if (result1 == result2)
	{
		printf("%d", result1);
	}

	return 0;
}