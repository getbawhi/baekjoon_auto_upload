#include <stdio.h>



int main() {

	int k, tmp=0;
	int result = -1;
	scanf("%d", &k);

	if (k % 5 == 0)
	{
		printf("%d", k / 5);
		return 0;
	}

	if (k % 3 == 0) result = k / 3;

	for (int i=1; (5*i)<k ; i++)
	{
		tmp = 0;
		for (int j = 1; tmp<k; j++)
		{
			tmp = (5 * i) + (3 * j);
			if (tmp==k) result = i + j;
		}
	}

	printf("%d", result);



    return 0;



}