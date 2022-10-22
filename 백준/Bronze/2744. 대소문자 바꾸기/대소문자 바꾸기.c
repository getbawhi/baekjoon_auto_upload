#include <stdio.h>
#include <string.h>

int main()
{
	char text[102];
	int i = 0;

	gets(text);

	int N = strlen(text);


	//아스키 코드 차이 32
	for (int i = 0; i < N; i++)
	{
		if (text[i]>=65 && text[i]<=90)
		{
			text[i] = text[i] + 32;
		}

		else if(text[i]>=97 && text[i]<=122)
		{
			text[i] = text[i] - 32;

		}
	}

	printf("%s", text);

	return 0;
}