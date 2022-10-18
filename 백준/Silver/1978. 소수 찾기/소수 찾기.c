#include <stdio.h>

int main() {

	int value[1000] = { 0 };
	int cnt = 0;
	int n;
	int compare[1000] = { 0 };
	int result = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &compare[i]);
	}


	for (int i = 2; i < 1000; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && i!=j)break;
			if (j == i) { value[cnt] = i; cnt++; }

		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			if (compare[i] == value[j])
				result++;
		}


	}

	printf("%d", result);
    
    return 0;
}