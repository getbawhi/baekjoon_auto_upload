#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int a, b;
	long long int result = 0;
	scanf("%lld %lld", &a, &b);

	result = (a + b) * (a - b);
	
	printf("%lld", result);

	return 0;
}