#include <stdio.h>
#include <time.h>

int main() {

	int table[3];
	int index;
	int max = 0;
	int mid = 0;
	int min = 0;

	scanf("%d %d %d", &table[0], &table[1], &table[2]);

	for (int i = 0; i < 3; i++)
	{
		if (max < table[i])
		{
			max = table[i];
			index = i;
		}
	}

	table[index] = 0;

	for (int i = 0; i < 3; i++)
	{
		if (mid < table[i])
		{
			mid = table[i];
			index = i;
		}
	}

	table[index] = 0;

	for (int i = 0; i < 3; i++)
	{
		if (table[i] != 0)
		{
			min = table[i];
		}
	}

	printf("%d %d %d", min, mid, max);

}