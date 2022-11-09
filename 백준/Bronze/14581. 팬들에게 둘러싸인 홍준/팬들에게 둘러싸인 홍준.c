#include <stdio.h>

int main() {

	char name[21];

	char imo[ ] = ":fan:";

	scanf("%s", &name);

	for (int i = 0; i < 3; i++)
	{
		printf("%s", imo);
	}
	
	printf("\n");

	printf("%s:%s:%s\n", imo, name, imo);

	for (int i = 0; i < 3; i++)
	{
		printf("%s", imo);
	}

	return 0;

}