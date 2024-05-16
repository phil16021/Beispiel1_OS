#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void lesenString(void *, int);
int lesenInt();
double lesenDouble();

void lesenString(void *textfeld, int groesseTextfeld)
{

    char zwischen[1000] = "";
    char zeichen;
    int i;

    if(scanf("%[^\n]", zwischen))
    {
        zwischen[groesseTextfeld] = '\0';
        strcpy(textfeld, zwischen);
    }
    else 
        strcpy(textfeld, "");
    do 
        zeichen = getchar();
    while (zeichen != '\n' && zeichen != EOF);
    

}

int lesenInt()
{
    char text[60];
    int eingeleseneZahl;
    lesenString(text, 60);
    eingeleseneZahl = atoi(text); 
    
    return eingeleseneZahl;
}

double lesenDouble()
{
    char text[60];
    double eingeleseneZahl;
    lesenString(text, 60);
    eingeleseneZahl = atof(text); 
    
    return eingeleseneZahl;
}

int main()
{
    char text[10];
    printf("Bitte einen Text eingeben: ");
    lesenString(text, 10);
    printf("%s\n", text);

    printf("Bitte eine ganze Zahl eingeben: ");
    printf("%d\n", lesenInt());

    printf("Bitte eine Zahl mit Nachkommastellen eingeben: ");
    printf("%f\n", lesenDouble());
    return 0;
} 