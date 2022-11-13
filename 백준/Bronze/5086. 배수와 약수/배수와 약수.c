#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int a=1, b=1;

	while (1)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0) break;

		if (a % b == 0) printf("multiple\n");
		else if (b % a == 0) printf("factor\n");
		else printf("neither\n");


	}

	return 0;
}