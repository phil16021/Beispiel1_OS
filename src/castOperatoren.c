#include <stdio.h> 

int main()
{
    double d, *pd;
    int *pi;
    void *pv;
    /* Implizite und explizite Umwandlungen */ 
    d = 11 / 4;
    printf("%f\n", d);

    d = (double) (11 / 4);
    printf("%f\n", d);

    d = (double) 11 / 4;
    printf("%f\n\n", d);
    
    /* Mehrfache explizite Umwandlung eines Zeigers */ 
    pv = (void *) &d;
    pi = (int *) pv;
    pd = (double *) pi;
    printf("%f\n", *pd);
    return 0;
} 