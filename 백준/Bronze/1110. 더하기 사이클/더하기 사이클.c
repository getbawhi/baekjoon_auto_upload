#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int p1, p2;
	int new_n = 0;
	int sum = 0;
	int cnt = 0;

	scanf("%d", &n);

	if (n == 0)
	{
		printf("1");
		return 0;
	}

	
	if (n < 10)
	{
		p1 = 0;
		p2 = n;
	}
	else
	{
		p1 = n / 10;
		p2 = n % 10;
	}

	sum = p1 + p2;

	new_n = (p2 * 10) + (sum % 10);

	cnt++;

	if (new_n == n)
	{
		printf("1");
	}

	while (n != new_n)
	{
		if (new_n < 10)
		{
			p1 = 0;
			p2 = new_n;
		}
		else
		{
			p1 = new_n / 10;
			p2 = new_n % 10;
		}

		sum = p1 + p2;

		new_n = (p2 * 10) + (sum % 10);

		cnt++;
	}
	

	printf("%d", cnt);


	return 0;
}