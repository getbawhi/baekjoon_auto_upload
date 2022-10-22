#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	int list[101];
	int key;
	int count = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &list[i]);
	}

	scanf("%d", &key);

	for (int i = 0; i < N; i++)
	{

		if (key == list[i])
		{
			count++;
		}

	}

	printf("%d", count);

	return 0;
}