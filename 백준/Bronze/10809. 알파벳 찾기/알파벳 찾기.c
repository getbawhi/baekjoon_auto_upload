#include <stdio.h>
#include <string.h>

int main() {

	char text[101];
	int alpha[26];
	int num = 0;

	for (int i = 0; i < 26; i++)
	{
		alpha[i] = -1;
	}

	gets(text);

	num = strlen(text);

	for (int i = 0; i < num; i++)
	{
		for (int j = 97; j < 123; j++)
		{
			if (text[i] == j)
			{
				if (alpha[j-97] == -1)
				{
					alpha[j-97] = i;
					break;
				}

				else break;
			}
		}

	}
	

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}

	return 0;

}