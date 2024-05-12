#include <stdio.h> 

int main()
{
    int z, p;
    /* Zuweisungsoperatoren */ 
    z = 6;      printf("%d ", z);
    z++;        printf("%d ", z);
    z--;        printf("%d\n", z);
    z += 13;    printf("%d ", z);
    z -= 5;     printf("%d ", z);
    z *= 3;     printf("%d ", z);
    z /= 6;     printf("%d ", z);
    z %= 6;     printf("%d\n", z);
    /* Vorzeichen */ 
    z = -z;
    printf("%d\n", z);
    /* Von rechts nach links */ 
    z = p = 40 + 2;
    printf("%d %d\n", z, p);
    /* Postfix */ 
    z = 6;
    p = z++;
    printf("%d %d\n", z, p);
    /* Alternative zu Postfix */ 
    z = 6;
    p = z;
    z = z + 1;
    printf("%d %d\n", z, p);
    /* Präfix */ 
    z = 6;
    p = ++z;
    printf("%d %d\n", z, p);
    /* Alternative zu Präfix */ 
    z = 6;
    z = z + 1;
    p = z;
    printf("%d %d\n", z, p);
    return 0;
}