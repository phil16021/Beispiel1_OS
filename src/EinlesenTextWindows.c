#include <stdio.h> 
#include <string.h> 


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(void)
{
    char satz[20];
    int i;
    for(i=1; i<=3; i++)
    {
        printf("Bitte einen Satz eingeben: ");
        fgets(satz, 20, stdin);    
        if(satz[strlen(satz) - 1] == 10)
            satz[strlen(satz) - 1] = '\0';
        else
            clean_stdin();

        printf("%s, %lu Zeichen\n", satz, strlen(satz));

    }
    return 0;
} 