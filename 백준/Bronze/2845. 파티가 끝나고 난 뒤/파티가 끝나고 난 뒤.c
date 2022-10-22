#include <stdio.h>


int main()
{
	
	int p, s;
	int answer = 0;
	int result[5];

	int news[5];

	scanf("%d %d", &p, &s);
	answer = p * s;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &news[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		result[i] = news[i] - answer;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", result[i]);
	}

	return 0;
}