#include <stdio.h> 
#include <complex.h> 
#include <math.h> 
int main()
{
    complex double cx;
    const double pi = 4 * atan(1.);
    double dReal, dImag, dBetrag, dWinkelBMass, dWinkelGrad;

    printf("Speicher: %lu Byte\n", sizeof(complex double));
    cx = 3.0 + 4.0i;

    dReal = creal(cx);
    dImag = cimag(cx);
    printf("Real- und Imaginaerteil: %.1f %.1fi\n", dReal, dImag);

    dBetrag = cabs(cx);
    printf("Betrag: %.1f\n", dBetrag);

    dWinkelBMass = carg(cx);
    printf("Winkel im Bogenmass: %.3f\n", dWinkelBMass);
    
    dWinkelGrad = dWinkelBMass * 180.0 / pi;
    printf("Winkel in Grad: %.3f\n", dWinkelGrad);

    return 0;
} 