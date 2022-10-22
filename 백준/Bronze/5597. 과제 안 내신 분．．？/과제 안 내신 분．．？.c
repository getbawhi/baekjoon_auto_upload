#include <stdio.h>
#include <string.h>

int main()
{
	
	int list[28];

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &list[i]);
	}
	
	for (int i = 1; i < 31; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (i == list[j])
			{
				break;
			}

			if (j == 27 && i != list[j])
			{
				printf("%d\n", i);
			}
		}
	}



	return 0;
	
}