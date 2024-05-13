#include <stdio.h> 




void halbieren(double wert)
{
    printf("%f\n", wert);
    wert = wert / 2;
    if(wert > 0.05)
    halbieren(wert);
}




int main()
{
    halbieren(3.0);
    return 0;
} 