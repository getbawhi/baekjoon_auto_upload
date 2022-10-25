#include <stdio.h>
#include <stdlib.h>

#define max 10001


int main() {

    int N;
    int num = 0;
    scanf("%d", &N);


    int arr[max] = { 0 };

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        arr[num]++;

    }

    for (int i = 0; i <= max; i++)
    {
        if (arr[i] == 0) continue;
        
        else if (arr[i] >= 1)
        {
            while (arr[i] > 0)
            {
                printf("%d\n", i);
                arr[i]--;
            }
        }

        
    }

    return 0;
}

