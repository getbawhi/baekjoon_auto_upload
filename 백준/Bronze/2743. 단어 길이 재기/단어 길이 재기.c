#include <stdio.h>
#include <string.h>

int main() {

	char text[101];
	int result;

	scanf("%s", &text);
	result = strlen(text);

	printf("%d", result);

}