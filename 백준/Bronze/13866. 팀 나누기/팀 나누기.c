#include <stdio.h>

int main(){
    
    int a,b;
    int n[4];
    int max = -1;
    for(int i=0; i<4; i++)
    {
        scanf("%d", &n[i]);
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(max<n[j])
            {
                max = n[j];
            }
        }
    }
    
    a = n[0]+n[3];
    b = n[1]+n[2];
    
    int sum = a-b;
    
    if(sum<0) sum = sum*-1;
    
    printf("%d",sum);
    return 0;
}