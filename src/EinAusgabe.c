#include <stdio.h> 
int main()
{
    double x;
    FILE *fp_ein, *fp_aus;

    fp_ein = fopen("datei_ein.txt", "r");
    fp_aus = fopen("datei_aus.txt", "w");

    if(fp_ein == NULL || fp_aus == NULL)
    { 
        printf("Dateifehler\n"); 
        return 1; 
    }

    while(fscanf(fp_ein, "%lf", &x) == 1)
        fprintf(fp_aus, "%8.2f\n", x*2);

    fclose(fp_ein);
    fclose(fp_aus);

    return 0;
} 