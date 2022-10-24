#include <stdio.h>

int main() {

	int much, num, money;
	int result = 0;

	scanf("%d %d %d", &much, &num, &money);

	result = much * num - money;

	if (result < 0) result = 0;

	printf("%d", result);

}