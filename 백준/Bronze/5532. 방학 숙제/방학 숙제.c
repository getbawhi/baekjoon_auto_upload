#include <stdio.h>
#include <string.h>

int main() {

	int n[5]; // L, a,b,c,d
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &n[i]);
	}

	while (1)
	{
		n[1] = n[1] - n[3];
		n[2] = n[2] - n[4];
		cnt++;
		if (n[1] <= 0 && n[2] <= 0) break;

		
	}

	n[0] = n[0] - cnt;

	printf("%d", n[0]);
	return 0;

}