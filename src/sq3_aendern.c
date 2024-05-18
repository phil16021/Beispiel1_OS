#include <stdio.h> 
#include <string.h> 
#include "sqlite3.h" 

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
    strcpy(sql, "UPDATE personen SET gehalt = 3950.0 " 
                "WHERE personalnummer = 6715");
    if(sqlite3_exec(con, sql, NULL, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("Betroffen: %d\n", sqlite3_changes(con));
    
    strcpy(sql, "SELECT * FROM personen");
    if(sqlite3_exec(con, sql, ausgabe, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
    printf("\n");

    sqlite3_close(con);

    return 0;
} 