#include <math.h>
#include <stdio.h> 
#include <stdlib.h> 

#define LEN 10

extern double sin(double);
extern double atan(double);

typedef struct winkel
{
    double grad;
    double bogenmass;
    double sin;
    double cos;
    double tan;
} winkel;

void Befuellen(winkel *uebergabeWinkel, double PI, double *winkelGrad)
{
    // int totalSize = (int)(sizeof(uebergabeWinkel));
    // int elementSize = sizeof(uebergabeWinkel[0]);
    // int laenge = totalSize / elementSize;
    // printf("%d / %d = %d \n", totalSize, elementSize, laenge);
    int laenge = LEN;
    double bogenmass;
    double test = 1.234;

    for(int i = 0; i < laenge; i++)
    {
        bogenmass = *(winkelGrad + i) * PI / 180;
        (uebergabeWinkel + i)->bogenmass = bogenmass;
        (uebergabeWinkel + i)->grad = *(winkelGrad + i);
        (uebergabeWinkel + i)->sin = sin(bogenmass);
        (uebergabeWinkel + i)->cos = cos(bogenmass);
        (uebergabeWinkel + i)->tan = tan(bogenmass);
    }

}

int Ausgabe(winkel *uebergabeWinkel)
{
    int laenge = LEN;
    printf("%d \n", laenge);
    FILE *fp;

    fp = fopen("Winkelfunktionen.txt", "w");
    if(fp == NULL) { 
        printf("Dateifehler\n"); 
        return 1; 
        }

    fprintf(fp, "%5s %12s %8s %8s %12s\n","Grad", "Bogenmass", 
    "sin()", "cos()", "tan()");
    
    for(int i = 0; i < laenge; i++)
    {
        fprintf(fp, "%5.1f %12.3f %8.3f %8.3f %12.2e\n",  
                                        (uebergabeWinkel + i)->grad, 
                                        (uebergabeWinkel + i)->bogenmass,
                                        (uebergabeWinkel + i)->sin,
                                        (uebergabeWinkel + i)->cos,
                                        (uebergabeWinkel + i)->tan);

    }
    
    fclose(fp);
    return 0;


}


int main()
{
    winkel *wkl;
    double *winkelGrad;

    double one = 1.0;
    double PI = atan(one)*4;

    printf("%lf \n", PI);
    
    wkl = (winkel *)calloc(LEN, sizeof(winkel));
    if(wkl == NULL) 
        return 1;

    winkelGrad = (double *)calloc(LEN, sizeof(double));
    if(winkelGrad == NULL) 
        return 1;

    for(int i = 0; i < LEN; i++)
    {
        *(winkelGrad + i) = i*10;
    }
    Befuellen(wkl, PI, winkelGrad);
    Ausgabe(wkl);


    return 0;
} 
