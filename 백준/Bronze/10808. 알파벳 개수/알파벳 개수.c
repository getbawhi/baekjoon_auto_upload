#include <stdio.h>
#include <string.h>

int main() {

	int n = 0;
	int alpha[26];
	int ii = 0;
	char text[101];

	int count[26] = { 0 };

	for (int i = 0; i < 26; i++)
	{
		count[i] = 0;
	}

	for (int i = 97; i <= 122; i++)
	{
		alpha[ii] = i;
		ii++;
	}

	scanf("%s", text, 101);

	n = strlen(text);

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (alpha[i] == text[j])
				count[i]++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", count[i]);
	}

	return 0;
}