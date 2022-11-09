#include <stdio.h>

int main() {

	int a[3];

	int c1=0, c2=0;

	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	for (int i = 0; i < 3; i++)
	{
		if (a[i] == 1) c1++;
	}


	for (int i = 0; i < 3; i++)
	{
		if (a[i] == 2) c2++;
	}

	if (c1 < c2) printf("2");
	else printf("1");
	return 0;

}