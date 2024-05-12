#include <stdio.h> 
#include <stdlib.h>

void aendern(const double radiusZwei,
                const double piGenau, double piUngenau)
{
    // radiusZwei = 8.5; // nicht erlaubt 
    // piGenau = 3.1; // nicht erlaubt 
    piUngenau = 3.1; // erlaubt 
}
int main()
{
    double radius = 5.0;
    const double pi = 3.1415926;
    radius = 7.5; // erlaubt 
    // pi = 3.0; // nicht erlaubt 
    aendern(radius, pi, pi);
    return 0;
} 
