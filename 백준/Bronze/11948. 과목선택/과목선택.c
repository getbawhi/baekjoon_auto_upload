#include <stdio.h>
void bubblesort(int* test, int n);

int main() {

	int test1[4];
	int test2[2];

	int sum1, sum2;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &test1[i]);
	}

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &test2[i]);
	}

	
	bubblesort(test1, 4);
	bubblesort(test2, 2);

	sum1 = test1[0] + test1[1] + test1[2] + test2[0];

	printf("%d", sum1);



}

void bubblesort(int* test, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i-1; j++)
		{
			if (test[i] < test[i + 1])
			{
				int tmp = test[i];
				test[i] = test[i + 1];
				test[i + 1] = tmp;
			}
		}
	}


}