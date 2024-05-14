#include<stdio.h>
#include<stdlib.h>

int Max(int anzahl, int *array)
{
    int max = array[0];
    for(int i = 1; i < anzahl; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int Min(int anzahl, int *array)
{
    int min = array[0];
    for(int i = 1; i < anzahl; i++)
    {
        if(array[i] > min)
        {
            min = array[i];
        }
    }
    return min;
}

void Ausgabe(char *name, int anzahl, int *array)
{
    printf("%-16s", name);
    for(int i = 0; i < anzahl; i++)
    {
        printf("%7d ", array[i]);
    } 
    printf("\n");
}

int Loeschen(int anzahl, int *array, int index)
{
    int geloeschteZahl = array[index];
    for(int i = index; i < anzahl - 1; i++)
    {
        array[i] = array[i + 1];

    }
    array[anzahl - 1] = 0;
    return geloeschteZahl;
}

void Einfügen(int anzahl, int *array, int index, int wert)
{
    for(int i = anzahl - 1; i > index; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = wert;
}
void Umdrehen(int anzahl, int *array)
{
    int helpline;
    for(int i = 0, k = anzahl -1; i < k; i++, k--)
    {
        helpline = array[i];
        array[i] = array[k];
        array[k] = helpline;
    }
}

void Kopieren(int anzahl, int *array, int *kopie)
{
    for(int i = 0; i < anzahl; i++)
    {
        kopie[i] = array[i];
    }
}
    

int main()
{
    int integerMatrix[5] = {3, 11, 2, 8, 4};   
    int geloeschteZahl;
    Ausgabe("Feld:", 5, integerMatrix);
    printf("Maximum: %d \n", Max(5, integerMatrix));
    printf("Minimum: %d \n", Min(5, integerMatrix));
    geloeschteZahl = Loeschen(5, integerMatrix, 1);
    Ausgabe("Nach Loeschen:", 5, integerMatrix);
    printf("Geloescht: %d\n", geloeschteZahl);
    Einfügen(5, integerMatrix, 1, 6);
    Ausgabe("Nach Einfuegen:", 5, integerMatrix);
    Umdrehen(5, integerMatrix);
    Ausgabe("Nach Umdrehen:", 5, integerMatrix);

    int kopie[5];
    Kopieren(5, integerMatrix, kopie);
    Ausgabe("Nach Kopieren:", 5, kopie);



    return EXIT_SUCCESS;
}