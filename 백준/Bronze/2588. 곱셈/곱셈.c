#include <stdio.h>

int main() {

	int a, b;
	int b1, b2, b3;
	int c1, c2, c3, c4;


	scanf("%d", &a);
	scanf("%d", &b);

	b1 = b / 100; //100 num
	b2 = (b - (b1 * 100)) / 10; //10 num
	b3 = (b - (b1 * 100) - (b2 * 10)); //1 num

	c1 = a * b3;
	c2 = a * b2;
	c3 = a * b1;
	c4 = a * b;

	printf("%d\n%d\n%d\n%d", c1, c2, c3, c4);

}