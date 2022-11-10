#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	long long int n;
	scanf("%lld", &n);
	int answer=0;
	int j = 0;

	int fin[] = { 1,2,3,4,5,4,3,2 };

	for (long long int i = 0; i < n; i++)
	{
		if (j <8) answer = fin[j];
		else if (j >= 8) {
			j = 0;
			answer = fin[j];
		}
		j++;

	}

	printf("%d", answer);

	return 0;

}