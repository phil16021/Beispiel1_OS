// cd ~/Dokumente/C_Programmierung_OS/Beispiel1_OS/src/

// to redirect input and output, use the following command:
// ./UmlenkungEinUndAusgabe < datei_ein.txt > datei_aus.txt

#include <stdio.h> 
int main()
{
    double x;
    while(scanf("%lf", &x) == 1)
        printf("%8.2f\n", x*2);

} 


