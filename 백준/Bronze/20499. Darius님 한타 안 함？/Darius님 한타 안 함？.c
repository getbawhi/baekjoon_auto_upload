#include <stdio.h>

int main() {

	int k,d,a;
	int flag;
	scanf("%d/%d/%d", &k, &d, &a);

	if (d == 0) flag = 0;

	else if (k + a < d)flag = 0;

	else flag = 1;

	if (flag == 0) printf("hasu");
	else(printf("gosu"));
	
    return 0;
}