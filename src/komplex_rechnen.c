#include <stdio.h> 
#include <complex.h> 
#include <math.h> 

int ausgabe(complex double ca)
{
    FILE *fp;
    fp = fopen("komplex_rechnen.txt", "a");
    if(fp == NULL)
        return 1;
    fprintf(fp, "%5.1f %5.1fi\n", creal(ca), cimag(ca));
    fclose(fp);
    return 0;
}





int main()
{
    complex double cx, cy, cz;
    cx = 3.0 + 4.0i; ausgabe(cx);
    cy = 2.0 - 5.0i; ausgabe(cy);
    cz = (0 + 1.0i) * (0 + 1.0i); 
    ausgabe(cz);
    cz = cx + 2.0; ausgabe(cz);
    cz = cx - 2.0; ausgabe(cz);
    cz = cx * 2.0; ausgabe(cz);
    cz = cx / 2.0; ausgabe(cz);

    cz = cx + cy; ausgabe(cz);
    cz = cx - cy; ausgabe(cz);
    cz = cx * cy; ausgabe(cz);
    cz = cx / cy; ausgabe(cz);

    cz = cx + 2.0i; ausgabe(cz);
    cz = cx - 2.0i; ausgabe(cz);
    cz = cx * 2.0i; ausgabe(cz);
    cz = cx / 2.0i; ausgabe(cz); 


    return 0;
} 