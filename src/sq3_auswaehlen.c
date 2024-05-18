#include <stdio.h> 
#include <string.h> 
#include <sqlite3.h> 

int ausgabe(void *info, int anzahlFelder,
                char **feldWert, char **feldName)
{
    int i;

    for(i=0; i<anzahlFelder; i++)
        printf("%s ", feldWert[i]);

    printf("\n");

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

    strcpy(sql, "SELECT name, vorname FROM personen");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    strcpy(sql, "SELECT * FROM personen WHERE gehalt > 3600");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    strcpy(sql, "SELECT * FROM personen WHERE name = 'Schmitz'");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    strcpy(sql, "SELECT * FROM personen WHERE gehalt >= 3600 " 
    " AND gehalt <= 3650");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    
    sqlite3_close(con);
    
    return 0;
} 