#include <stdio.h>
#include <string.h>

int main() {

	int a, b;
	int price;

	scanf("%d %d", &a, &b);
	scanf("%d", &price);

	if (price * 2 <= a + b)
	{
		int sum = (a + b) - (price * 2);
		printf("%d", sum);
		return 0;

	}

	else
	{
		int sum = (a + b);
		printf("%d", sum);
		return 0;
	}
	
	return 0;
}