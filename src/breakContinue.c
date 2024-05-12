#include <stdio.h> 
int main()
{
    double euro, summe;
    int cent, abbruch = 0;
    for(euro=0; euro<=3; euro++)
    {
        for(cent=0; cent<=90; cent+=10)
        {
            summe = euro + cent / 100.0;
            printf("%6.2f", summe);
            if(summe > 2.35)
            {
                abbruch = 1;
                break;
            }
        }
        printf("\n");
        if(abbruch)
            break;
    }
    return 0;
} 