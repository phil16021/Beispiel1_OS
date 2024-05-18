#include <stdio.h> 
#include <string.h> 
#include "sqlite3.h" 

int ausgabe(void *info, int anzahlFelder,
            char **feldWert, char **feldName)
{
    printf("%s, %s\n", feldWert[0], feldWert[1]);
    return 0;
}

int main()
{
    sqlite3 *con;
    char sql[255], *meldung, eingabe[255];

    if(sqlite3_open("firma.db", &con))
    { 
        printf("Fehler bei Verbindung\n"); 
        return 1; 
        }

    printf("Bitte den gesuchten Namen eingeben: ");
    scanf("%s", eingabe);

    strcpy(sql, "SELECT name, vorname FROM personen " 
                        "WHERE name LIKE '");
    strcat(sql, eingabe);
    strcat(sql, "'");

    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    printf("Bitte den gesuchten Namensteil eingeben: ");
    scanf("%s", eingabe);
    strcpy(sql, "SELECT name, vorname FROM personen " 
                            "WHERE name LIKE '%");
    strcat(sql, eingabe);
    strcat(sql, "%'");

    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    sqlite3_close(con);
    
    return 0;
} 