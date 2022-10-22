#include <stdio.h>

int main()
{
	int T;
	int n;
	int list[1000];
	float avg = 0, person =0;
	int ii = 0;
	char c='a';
	float result=0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{

		while (c!='\n')
		{
			scanf("%d", &list[ii]);
			c = getchar();
			ii++;
		}

		for (int i = 1; i < list[0]+1; i++)
		{
			avg = avg + list[i];
		}

		avg = avg / list[0];
		//평균치 구함

		for (int i = 1; i < list[0] + 1; i++)
		{
			if (list[i] >avg)
			{
				person++;
			}
		}

		
		result = person / list[0];
		result = result * 100.0;


		printf("%.3f%%", result);
		printf("\n");

		person = 0;
		avg = 0;
		ii = 0;
		c = 'a';

	}


	return 0;
}