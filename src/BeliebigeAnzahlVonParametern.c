#include <stdio.h> 
#include <stdarg.h> 

double Multipizieren(int anzahl, ...)
{
    double produkt = 1.0, produkt2 = 1.0;
    va_list listenElement, listenElement2;

    va_start(listenElement, anzahl);
    for(int i = 0; i < anzahl; i++)
    {
        produkt *= va_arg(listenElement, double);
    }
    va_end(listenElement);

    va_start(listenElement2, anzahl);
    for(int i = 0; i < anzahl; i++)
    {
        produkt2 *= va_arg(listenElement2, double);
    }
    va_end(listenElement2);

    return produkt2;

}



int main()
{
    printf("Summe: %.2f\n", Multipizieren(2,   2.0, 2.0));
    printf("Summe: %.2f\n", Multipizieren(3,   2.0, 2.0, 2.0));
    return 0;
} 