#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);
	double result = a * 2;

	result = result + (b * 2 * 3.141592);

	printf("%lf", result);
	
	return 0;

}