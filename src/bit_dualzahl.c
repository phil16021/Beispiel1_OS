#include <stdio.h> 
#include <string.h> 

void dez2dual(unsigned char dez, char *dual)
{
    int i;
    for(i=7; i>=0; i--)
    {
        if(dez & 1) 
            dual[i] = '1';
        else 
            dual[i] = '0';
        dez = dez >> 1;
    }
    dual[8] = '\0';
} 

unsigned char dual2dez(char *dual)
{
    int stellenwert = 1, i, dez = 0;

    for(i=7; i>=0; i--)
    {
        if(dual[i] == '1') 
            dez += stellenwert;
        stellenwert *= 2;
    }
    return dez;
} 


int main()
{
    unsigned char dezZahl;
    char dualZahl[9];
    dezZahl = 21;
    FILE *fp;

    fp = fopen("bit_dualzahl.txt", "a");
    if(fp == NULL)
        return 1;

    dez2dual(dezZahl, dualZahl);
    fprintf(fp, "%3d %s\n", dezZahl, dualZahl);
    dezZahl = 255;
    dez2dual(dezZahl, dualZahl);
    fprintf(fp, "%3d %s\n", dezZahl, dualZahl);
    strcpy(dualZahl, "00010101");
    fprintf(fp, "%s %3d\n", dualZahl, dual2dez(dualZahl));
    strcpy(dualZahl, "11111111");
    fprintf(fp, "%s %3d\n", dualZahl, dual2dez(dualZahl));

    fclose(fp);

    return 0;
} 