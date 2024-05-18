#include <stdio.h> 

int main(int anzahl, char *worte[])
{
    int i;
    printf("Anzahl: %d\n", anzahl);

    for(i=0; i<anzahl; i++)
        printf("%d: %s\n", i, worte[i]);
        
    return 0;
} 