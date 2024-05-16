#include <stdio.h> 
#include <string.h> 

void teilTextVonBis(char *a, char *b, int von, int bis)
{
    int i, aLaenge = (int)strlen(a);
    b[0] = '\0';
    if(von < 0 || bis < 1 || von >= bis || von > aLaenge)
        return;

    if(bis > aLaenge)
        bis = aLaenge;
    for(i = von; i < bis; i++)
        b[i-von] = a[i];
    b[bis-von] = '\0';
} 

void loeschenVonBis(char *a, int von, int bis)
{
    int i, aLaenge = (int)strlen(a);
    if(von < 0 || bis < 1 || von >= bis || von > aLaenge)
        return;
    if(bis > aLaenge)
        bis = aLaenge;
    for(i = von; i < aLaenge; i++)
    {
        a[i] = a[i + bis-von];
        if(a[i] == '\0') break;
    }
} 

void teilTextVonLaenge(char *a, char *b, int von, int laenge)
{
    int i, aLaenge = (int)strlen(a);
    b[0] = '\0';
    if(von < 0 || laenge <= 0 || von > aLaenge)
        return;
    if(von + laenge > aLaenge)
        laenge = aLaenge - von;
    for(i = von; i < von + laenge; i++)
        b[i-von] = a[i];
    b[laenge] = '\0';
} 

void loeschenVonLaenge(char *a, int von, int laenge)
{
    int i, aLaenge = (int)strlen(a);
    if(von < 0 || laenge <= 0 || von > aLaenge)
        return;
    if(von + laenge > aLaenge)
        laenge = aLaenge - von;
    for(i = von; i < aLaenge; i++)
    {
        a[i] = a[i + laenge];
        if(a[i] == '\0') break;
    }
} 

void einfuegen(char *a, char *einfuegeText, int von)
{
    int i, aLaenge = (int)strlen(a), textLaenge = (int)strlen(einfuegeText);
    char zwischen[1000];

    if(von > aLaenge)
        von = aLaenge;
    
    if(von < 0)
        return;

    a[aLaenge + textLaenge+1] = '\0';
    for(i = von; i < aLaenge + textLaenge; i++)
    {
        zwischen[i-von] = a[i];
    }
    for(i = von; i < aLaenge + textLaenge+1; i++)
    {  
        a[i] = einfuegeText[i-von];
    }
    strcat(a, zwischen);

}

void tauschenVonBis(char *a, char *einfuegeText, int von, int bis)
{
    loeschenVonBis(a, von, bis);
    einfuegen( a,  einfuegeText,  von);
}

void tauschenVonLaenge(char *a, char *einfuegeText, int von, int laenge)
{
    loeschenVonLaenge(a, von, laenge);
    einfuegen( a,  einfuegeText,  von);
}

int position(char *textfeld, char *suchtext)
{
    int position, gefunden=0, textfeldLaenge = (int)strlen(textfeld), 
                        suchtextLaenge = (int)strlen(suchtext);

    for(int i = 0; i < textfeldLaenge-suchtextLaenge +1; i++)
    {
        position = i;
        if(textfeld[i]==suchtext[0])
        {
            for(int j = i; j < suchtextLaenge+i; j++)
            {
                if(textfeld[j]!=suchtext[j-i])
                {
                    gefunden=0;
                    break;
                }
                gefunden=1;
            }
            if(gefunden == 1)
                return position;
        }
    }
    return -1;
}

int main()
{
    char text[50] = "0123456789";
    char teil[50];
    printf("Original: %s\n", text);
    
    teilTextVonBis(text, teil, 2, 5);
    printf("Teiltext: %s\n", teil);

    loeschenVonBis(text, 2, 5);
    printf("Nach Loeschen: %s\n", text);
    
    teilTextVonLaenge(text, teil, 2, 4);
    printf("Teiltext: %s\n", teil);
    
    loeschenVonLaenge(text, 2, 4);
    printf("Nach Loeschen: %s\n", text);

    einfuegen(text, "2345678", 2);
    printf("Nach Einfuegen: %s\n", text);
    
    tauschenVonBis(text, "abcdef", 2, 5);
    printf("Nach Aendern: %s\n", text);
    
    tauschenVonLaenge(text, "234", 2, 6);
    printf("Nach Aendern: %s\n", text);
    printf("Position: %d\n", position(text, "567"));
    printf("Position: %d\n", position(text, "566"));
    return 0;
} 