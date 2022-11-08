#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people {
    int id;
    int age;
    char name[101];
}PEOPLE;

int static compare(const void* first, const void* second)
{
    return((PEOPLE*)first)->age - ((PEOPLE*)second)->age;
}

int main() {

    int n;
    int before, after;
    int cnt = 0;

    scanf("%d", &n);
    
    PEOPLE* p = (struct people*)malloc(sizeof(struct people) * n);

    PEOPLE tmp_p;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &p[i].age, &p[i].name);
        p[i].id = i;
    }

    
    qsort(p, n, sizeof(p[0]), compare);
    

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", p[i].age, p[i].name);
    }



    return 0;
}


