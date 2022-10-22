#include <stdio.h>


int main()
{
	int score[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (score[i] >= 40)
		{

		}

		else if (score[i] < 40)
		{
			score[i] = 40;
		}			

		sum = sum + score[i];


	}

	sum = sum / 5;

	printf("%d", sum);


	return 0;
	
}