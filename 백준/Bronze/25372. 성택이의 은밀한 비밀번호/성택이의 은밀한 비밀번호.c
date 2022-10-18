#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char text[22];
    int num = 0;
    int cnt = 0;

    scanf("%d", &cnt);

    for (int i = 0; i < cnt; i++)
    {

        scanf("%s", text);

        num = strlen(text);


        if (num >= 6 && num <= 9)
        {
            printf("yes\n");
        }

        else { printf("no\n"); }

    }

    return 0;

}