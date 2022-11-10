#include <stdio.h>
#include <stdlib.h>

int main() {

	long long int n, need;
	long long int count = 0;
	long long int cm = 0;
	long long int max = -1;
	long long int tmp = 0;
	scanf("%lld", &n);
	scanf("%lld", &need);

	long long int* line = (long long int*)malloc(sizeof(long long int) * n);

	

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &line[i]);

	}

	for (int i = 0; i < n; i++)
	{
		if (max < line[i])
		{
			max = line[i];
		}
	}

	if (n==1&&need == 1)
	{
		printf("%d",line[0]);
		return 0;
	}

	long long int min = 1;

	while (min<=max)
	{

		cm = (max + min) / 2;
		count = 0;

		for (int i = 0; i < n; i++)
		{
			count = count+ line[i] / cm;
			
		}



		if (count <need)
		{
			max = cm - 1;

		}

		else
		{
			min = cm +1;

		}



	}

	printf("%lld", max);


}