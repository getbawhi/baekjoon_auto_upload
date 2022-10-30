#include <stdio.h>

#include <string.h>

int main() {

   
    int a, b;
    int result = 0;

    while (1)
    {
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) break;
        result = a + b;
        printf("%d\n", result);


    }
    



    return 0;
}

