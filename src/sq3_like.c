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
    char sql[255], *meldung;

    if(sqlite3_open("firma.db", &con))
    { 
        printf("Fehler bei Verbindung\n"); 
        return 1; 
        }

    strcpy(sql, "SELECT * FROM personen WHERE name LIKE 'm%'");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    strcpy(sql, "SELECT * FROM personen WHERE name LIKE '%i%'");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    strcpy(sql, "SELECT * FROM personen WHERE name LIKE 'M__er'");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    sqlite3_close(con);
    
    return 0;
} 