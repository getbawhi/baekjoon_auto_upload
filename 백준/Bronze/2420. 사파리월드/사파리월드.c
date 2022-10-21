#include <stdio.h>

int main() {

	long int a, b;
	long int result = 0;
	scanf("%ld %ld", &a, &b);

	if (a < 0 && b>=0)
	{
		a = a * -1;

		result = a + b;
	}

	else if (a >= 0 && b < 0)
	{
		b = b * -1;
		result = a + b;
	}
	
	else if (a < 0 && b < 0)
	{
		a = a * -1;
		result = a + b;

	}

	else if (a >= 0 && b >= 0)
	{

		result = a - b;

	}


	if (result < 0)
	{
		result = result * -1;
	}
	

	printf("%ld", result);

	return 0;
}