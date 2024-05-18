#include <stdio.h> 
#include <complex.h> 
#include <math.h> 


int ausgabe(char *text, complex double ca)
{
    FILE *fp;
    fp = fopen("komplex_funktionen.txt", "a");
    if(fp == NULL)
        return 1;
    fprintf(fp, "%-15s %8.3f %8.3fi\n", text, creal(ca), cimag(ca));
    fclose(fp);
    return 0;
}


int main()
{
    complex double cx, cz;
    cx = 3.0 + 4.0i; ausgabe("cx:", cx);
    cz = csqrt(cx); ausgabe("Wurzel(cx):", cz);
    cz = cpow(cx,2); ausgabe("cx hoch 2:", cz);
    cz = cexp(cx); ausgabe("e hoch cx:", cz);
    cz = clog(cx); ausgabe("ln(cx):", cz);
    cz = conj(cx); ausgabe("cx konjugiert:", cz);
    return 0;
} 