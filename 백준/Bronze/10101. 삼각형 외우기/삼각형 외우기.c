#include <stdio.h>

#include <string.h>

int main() {

    int n[3];
    int sum = 0;


    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }
   

    sum = n[0] + n[1] + n[2];
    
    if (sum != 180) {
        
        printf("Error");
        return 0;
    }
    
    if (n[0] == n[1] && n[1] == n[2])
    {
        printf("Equilateral");
        return 0;
    }
    
    else if (n[0] == n[1] || n[1] == n[2] || n[0] == n[2])
    {
        printf("Isosceles");
        return 0;

    }

    else
    {
        printf("Scalene");
    }

    return 0;
}

