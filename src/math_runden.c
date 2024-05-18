#include <stdio.h> 
#include <math.h> 

int main()
{
    double a = 7.84, b = -7.84;
    int ia, ib;
    double ganz, nachkomma;

    printf("Werte: %.2f %.2f\n", a, b);
    printf("ceil(): %.2f %.2f\n", ceil(a), ceil(b));
    printf("floor(): %.2f %.2f\n", floor(a), floor(b));
    printf("round(): %.2f %.2f\n", round(a), round(b));

    ia = a;
    ib = b;
    printf("Implizit: %d %d\n", ia, ib);
    printf("Explizit: %d %d\n", (int)a, (int)b);

    nachkomma = modf(a, &ganz);
    printf("modf(): %.2f %.2f\n", ganz, nachkomma);
    printf("fmod(): %.2f\n", fmod(a, 3.0));
    return 0;
} 