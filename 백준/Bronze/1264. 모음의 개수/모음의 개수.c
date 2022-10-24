#include <stdio.h>
#include <string.h>

int main() {

	char key[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	char text[256]= {NULL};
	int n;
	int cnt = 0;

	while (1)
	{
		gets(text);
		if (text[0] == '#') return 0;
		n = strlen(text);

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (text[i] == key[j])
				{
					cnt++;
					break;
				}

			}
		}
		
		printf("%d\n", cnt);
		cnt = 0;
        
	}

	return 0;

}