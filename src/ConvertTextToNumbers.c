#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int i;
    double d;
    char text[30];
    i = atoi(" -010"); printf("%4d\n", i * 2);
    i = atoi("00abc"); printf("%4d\n", i * 2);
    i = atoi("dsfg10abc334"); printf("%4d\n", i * 2);
    i = atoi("10e3..34"); printf("%4d\n", i * 2);
    printf("\n");
    d = atof(" -010.2"); printf("%9.2f\n", d * 2);
    d = atof("10,2"); printf("%9.2f\n", d * 2);
    d = atof("10.2abc"); printf("%9.2f\n", d * 2);
    d = atof("10.2e3"); printf("%9.2f\n", d * 2);
    printf("\n");
    i = 42;
    d = 3.5;
    sprintf(text, "Anzahl %d, Preis %.2f Euro", i, d);
    printf("%s\n", text);
    return 0;
} 