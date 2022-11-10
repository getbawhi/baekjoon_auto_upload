#include <stdio.h>

int main() {

	int num[4] = { -1,-1,-1,-1 };
	int i = 0;
	int total = 0;
	int tmp;
	scanf("%d", &tmp);
	int tmp1 = tmp;
	int ten = 10;
	int cnt = 0;

	

	while (tmp > 0)
	{
		tmp = tmp / ten;
		cnt++;
		

	}
	
	cnt = cnt - 1;
	int size = 1;
	for (int i = 0; i < cnt; i++)
	{
		size = size * 10;
	}

	i = 0;

	while (cnt >= 0)
	{
		num[i] = tmp1 / size;
		if (num[i] != 0) {
			tmp1 = tmp1 - (size * num[i]);
		}
		else if (num[i] == 0) {
			num[i] = 0;
		}
		
	
		size = size / 10;
		i++;
		cnt--;

	}


	if (num[0] == 1)
	{
		if (num[1] == 0)
			total = 10;

		else total = 1;
	}

	else
	{
		total = num[0];
	}

	if (num[1] == 1 && num[2] == 0)
	{
		total = total + 10;
		printf("%d", total);
		return 0;
	}

	else if(num[1]!=-1)
	{
		total = total + num[1];
	}

	if (num[2] == 1)
	{
		if (num[3] == 0)
			total = total + 10;
		else
			total = total + 1;
	}

	else if(num[2]!=-1)
	{
		total = total + num[2];
	}

	printf("%d", total);
	return 0;

}