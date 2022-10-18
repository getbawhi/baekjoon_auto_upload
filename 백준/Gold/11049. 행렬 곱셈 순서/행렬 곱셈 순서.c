#include <stdio.h>
#include <stdlib.h>

int matmul(int* P, int N);
int main() {

    int num;
    int result = 0;
    int tmp = 0;
    int cnt = 0;

    scanf("%d", &num);

    int* p = (int*)malloc(sizeof(int) * num * 2);

    for (int i = 0; i < num*2; i++)
    {
        scanf("%d", &tmp);
        
        if (i%2!=0 && i!=num*2-1)
        {
            continue;
        }

        else
        {
            p[cnt] = tmp;
            cnt++;
        }
        

    }

    result = matmul(p, num);

    printf("%d", result);

    return 0;
}




int matmul(int* P, int N)
{


    int table[501][501];


    for (int k = 0; k < 501; k++)
    {
        for (int kk = 0; kk < 501; kk++)
        {
            table[k][kk] = 0;
        }
    }

    for (int r = 1; r <= N - 1; r++)
    {
        for (int ii = 1; ii <= N - r; ii++)
        {


            int jj = ii + r;
            int min = 0x7fffffff;
            for (int k = ii; k <= jj - 1; k++)
            {
                int q = table[ii][k] + table[k + 1][jj] + P[ii - 1] * P[k] * P[jj];
                if (q < min) min = q;


            }

            table[ii][jj] = min;


        }


    }










    return(table[1][N]);

}