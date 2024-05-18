#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
    double a = 7.84, b = -7.84;
    int d = -4;
    printf("fmax(%.2f,%.2f): %.2f\n", a, b, fmax(a,b));
    printf("fmin(%.2f,%.2f): %.2f\n\n", a, b, fmin(a,b));
    printf("fabs(%.2f): %.2f\n", b, fabs(b));
    printf("abs(%d): %d\n", d, abs(d));
    printf("sqrt(%.2f): %.2f\n\n", a, sqrt(a));
    printf("10 hoch 2: %.1f\n", pow(10,2));
    printf("log von 100: %.1f\n\n", log10(100));
    printf("e hoch 4.605170: %f\n", exp(4.605170));
    printf("ln von 100: %f\n\n", log(100));
    return 0;
} 