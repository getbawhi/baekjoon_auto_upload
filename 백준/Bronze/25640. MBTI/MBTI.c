#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char answer[20];
	int n;
	scanf("%s", &answer);

	scanf("%d", &n);

	char** list = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++)
	{
		list[i] = (char*)malloc(sizeof(char) * 20);
	}

	for (int i = 0; i < n; i++)
	{
		char text[20];
		scanf("%s", &text);
		strcpy(list[i], text);
	}

	int count=0;

	for (int i = 0; i < n; i++)
	{
		if (strcmp(answer, list[i]) == 0)
		{
			count++;
		}
	}


	printf("%d", count);
	return 0;
}