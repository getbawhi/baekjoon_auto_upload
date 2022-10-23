#include <stdio.h>
#include <string.h>

int main() {

	int a, b, cnt =0;
	int cnt_a[50];
	int cnt_b[50];
	int size_a, size_b;

	for (int i = 0; i < 50; i++)
	{
		cnt_a[i] = 0;
		cnt_b[i] = 0;
	}


	int an_1, an_2;
	scanf("%d %d", &a, &b);


	//최소 공약수
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			cnt_a[cnt] = i;
			cnt++;
		}

	}

	cnt = 0;
	
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			cnt_b[cnt] = i;
			cnt++;
		}
	}


	

	for (int i = 0; i <50; i++)
	{
		if (cnt_a[i] == 0) break;
		for (int j = 0; j <50; j++)
		{
			if (cnt_b[j] == 0) break;
			if (cnt_a[i] == cnt_b[j])
			{
				an_1 = cnt_a[i];
			}
		}
	}

	an_2 = an_1 * (a/an_1) * (b/an_1);

	printf("%d\n%d", an_1, an_2);
	

	return 0;
}