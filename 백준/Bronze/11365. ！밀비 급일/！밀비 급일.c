#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n = 0;
    char text[501] = {NULL};

    while (1) {

        gets(text);
        if (strcmp(text, "END") == 0) break;

        n = strlen(text);

        for (int i = n-1; i >= 0; i--)
        {
            printf("%c", text[i]);
        }

        printf("\n");

    }
  

    



    return 0;
}

