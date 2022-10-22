#include <stdio.h>


int main()
{
	int key;
	int car[5];
	int cnt = 0;

	scanf("%d", &key);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &car[i]);

	}

	for (int i = 0; i < 5; i++)
	{
		if (key == car[i])
		{
			cnt++;
		}
	}

	printf("%d", cnt);

}