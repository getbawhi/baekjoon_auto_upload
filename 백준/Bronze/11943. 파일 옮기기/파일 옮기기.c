#include <stdio.h>

#include <string.h>

int main() {

    int n[4]; //사과 0,2, orage 1,3
    int apple;
    int orange;
    int sum;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n[i]);
    }

    apple = n[0] + n[3];
    orange = n[1] + n[2];

    if (apple > orange) sum = orange;

    else sum = apple;

    printf("%d", sum);


    return 0;
}

