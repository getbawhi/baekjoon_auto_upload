#include <stdio.h>
#include <string.h>

int main()
{
	char text[1001];
	int n;
	int a;

	scanf("%d", &a);


	while (scanf("%s", &text) != EOF) {

		n = strlen(text);

		if (n == 1)
		{
			printf("%c%c", text[0], text[0]);
			printf("\n");
		}

		else
		{
			printf("%c%c", text[0], text[n - 1]);
			printf("\n");
		}


	}


	

	return 0;
}