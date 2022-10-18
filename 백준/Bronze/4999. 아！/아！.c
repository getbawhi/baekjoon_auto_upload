#include <stdio.h>
#include <string.h>
int main(){
    
    char text[1002];
    char want[1002];
    int t;
    int w;
    
    gets(text);
    gets(want);
    
    t = strlen(text);
    w = strlen(want);
    
    
    if(t >= w) printf("go");
    else printf("no");
    
    return 0;
}