#include <stdio.h>

int main(){
    
    long int sum =0;
    long int tmp=0;
    
    for(int i=0; i<5; i++)
    {
        scanf("%ld", &tmp);
        sum = sum+ tmp;
    }
    
    printf("%ld", sum);
}