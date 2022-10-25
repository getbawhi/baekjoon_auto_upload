#include <stdio.h>
#include <string.h>

int main() {

	int m[4];
	int sum = 0;
	int min, sec;
	
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &m[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		sum = sum + m[i];
	}

	min = sum / 60;
	sec = sum % 60;

	printf("%d\n%d", min, sec);

	return 0;

}