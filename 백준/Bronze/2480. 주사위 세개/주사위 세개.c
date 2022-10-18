#include <stdio.h>

int main() {

	int a, b, c;
	int max = 0, result =0;
	int rnum;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		result = 10000 + a * 1000;
	}

	else if (a == b || b == c || a == c)
	{
		if (a == b || a == c)
		{
			result = 1000 + a * 100;

		}


		else
		{
			result = 1000 + b * 100;
		}

	}

	else
	{
		if (a > b && a > c)
		{
			rnum = a;
		}

		else if (b > a && b > c)
		{
			rnum = b;
		}

		else
		{
			rnum = c;
		}

		result = rnum * 100;


	}

	printf("%d", result);



	return 0;
}

