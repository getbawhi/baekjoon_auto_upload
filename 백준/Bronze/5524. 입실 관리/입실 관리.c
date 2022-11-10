#include <stdio.h>
#include <string.h>

int main() {

	int n;
	scanf("%d", &n);
	char text[101];
	for (int i=0; i < n; i++)
	{
		scanf("%s", &text);

		int len = strlen(text);

		for (int i = 0; i < len; i++)
		{
			if (text[i] < 97) text[i] = text[i] - ('A'-'a');
		}

		printf("%s\n", text);

	}

}