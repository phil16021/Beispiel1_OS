#include <stdio.h> 

double quadrat(double x)
{ 
    return x * x; 
}
double hochdrei(double x)
{ 
    return x * x * x; 
    
}

void ausgabeTabelle(double unten, double oben,
                        double schritt, double fkt(double x))
{
    double p;
    for(p = unten; p < oben + schritt / 2.0; p += schritt)
        printf("%8.2f %8.2f\n", p, fkt(p));
    printf("\n");
}
int main()
{
    ausgabeTabelle(5.0, 15.0, 2.5, quadrat);
    ausgabeTabelle(3.0, 7.0, 1, hochdrei);
return 0;
} 