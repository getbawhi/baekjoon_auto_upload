#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int a = 300;
	int b = 60;
	int c = 10;

	int timer = 0;
	int count_a = 0;
	int count_b = 0;
	int count_c = 0;

	scanf("%d", &timer);

	while (timer != 0)
	{
		if (timer < 0)
		{
			printf("-1");
			return 0;
		}
		

		if (timer - a >= 0 || timer-a ==0)
		{
			timer -= a;
			count_a++;
			if (timer == 0)
			{
				break;
			}
			continue;


		}
		else if (timer - b >= 0||timer-b ==0)
		{
			timer -= b;
			count_b++;
			if (timer == 0)
			{
				break;
			}
			continue;
		}
		else if (timer - c >= 0|| timer-c ==0)
		{
			timer -= c;
			count_c++;
			if (timer == 0)
			{
				break;
			}
			continue;

		}
		else if (timer - a < 10)
		{
			printf("-1");
			return 0;
		}

	}

	printf("%d %d %d", count_a, count_b, count_c);
	return 0;
}