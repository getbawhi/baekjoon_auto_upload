#include <stdio.h>
#include <time.h>

int main() {

	int n, var = -1, ii = 0;
	int ten = 1;
	int cnt = 0;
	int table[10];
	int end = 0;

	while (scanf("%d", &n) != EOF)
	{
		var = -1;
		ii = 0;
		ten = 1;
		cnt = 0;

		if (n == 0) return 0;

		while (var != 0)
		{
			var = n / ten;
			cnt++;
			ten = ten * 10;

		}

		ten = 1; //초기화
		var = 1; //초기화
		cnt = cnt - 1; //자릿수 알아내기

		for (int i = 1; i < cnt; i++)
		{
			ten = ten * 10;
		}

		while (n != 0)
		{
			table[ii] = n / ten;
			n = n - (table[ii] * ten);
			ten = ten / 10;
			ii++;

		} //한 숫자씩 분리

		for (int i = 0; i < cnt; i++)
		{
			if (table[i] == table[cnt - i - 1] && i == cnt -1)
			{
				printf("yes\n");
				end = 1;
			}

			if (table[i] == table[cnt - i - 1])
			{
				continue;
			}

			else
			{
				printf("no");
				printf("\n");
				end = 1;

			}

			if (end == 1) break;

		}


	}




	return 0;
}