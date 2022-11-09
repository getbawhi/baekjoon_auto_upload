#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int sum = a + b + c;
	if (sum >= 100) {
		printf("OK");
		return 0;
	}

	if (a < b && a < c) printf("Soongsil");
	else if (b < a && b < c) printf("Korea");
	else printf("Hanyang");
	return 0;

}