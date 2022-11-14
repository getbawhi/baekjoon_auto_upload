#include <stdio.h>

int main(){
    
    long long int sum =0; 
    long long int n;
    
    while(1)
    {
        scanf("%lld", &n);
        if(n==-1) break;
        sum += n;
    }
    
    printf("%lld", sum);
}