#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int n[3] = { 1,1,1 };
	int max = -1;
	int cc;
	int index = 0;
	int cnt = 0;
	long long int sum1 = 0;
	long long int sum2;

	while (1)
	{
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
			if (n[0] == 0 && n[1] == 0 && n[2] == 0) break;

		if (n[0] == n[1] && n[1] == n[2] && n[0] == n[2])
		{
			printf("wrong\n");
			continue;
		}

		for (int i = 0; i < 3-1; i++)
		{
			for (int j = 0; j<3-i-1; j++)
			{
				if (n[j] < n[j + 1])
				{
					int tmp = n[j];
					n[j] = n[j + 1];
					n[j+1] = tmp;
				}
			}
		}
		
		sum1 = n[1] * n[1] + n[2] * n[2];
		sum2 = n[0] * n[0];

		if (sum1 == sum2) printf("right\n");
		else printf("wrong\n");


	}

	return 0;

}