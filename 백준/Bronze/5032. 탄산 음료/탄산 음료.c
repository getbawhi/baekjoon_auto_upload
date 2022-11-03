#include <stdio.h>

int main() 
{

    int sum, bo1, bo2, left, num, tmp=2;

    scanf("%d %d %d", &bo1, &bo2, &num);

    sum = (bo1 + bo2) / num;
    left = (bo1 + bo2 - num * sum) + sum;

    while (tmp >= 1)
    {
        tmp = left / num;
        sum = sum + tmp;
        left = left - (num * tmp) + tmp;

    }


    printf("%d", sum);

    return 0;
}