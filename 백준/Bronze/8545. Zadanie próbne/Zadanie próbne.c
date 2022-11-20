#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char n[3];

	for (int i = 0; i < 3; i++)
	{
		scanf("%c", &n[i]);
	}

	for (int i = 2; i >= 0; i--)
	{
		printf("%c", n[i]);
	}
}