#include <stdio.h> 
int main()
{
    int x = 12, y = 15, z;
    /* Kurz */ 
    z = x > y ? x : y;
    printf("%d\n", z);
    /* Lang */ 
    if(x > y)
        z = x;
    else 
        z = y;
    printf("%d\n", z);

    double preis = 0.85;

    if(preis < 0.1)
    printf("billig\n");
    else if(preis >= 1.0)
    printf("teuer\n");
    else if(preis >= 2.0)
    printf("sehr teuer\n");
    else 
    printf("normaler Preis\n");

    return 0;
} 