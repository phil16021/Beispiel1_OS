#include <stdio.h> 
#include <string.h> 
#include <sqlite3.h>

int main()
{
    sqlite3 *con;
    char sql[255];
    char *meldung;

    if(sqlite3_open("firma.db", &con))
    { 
        printf("Fehler bei Verbindung\n"); 
        return 1; 
        }

    strcpy(sql, "CREATE TABLE IF NOT EXISTS personen(" 
                        "name TEXT, " 
                        "vorname TEXT, " 
                        "personalnummer INTEGER PRIMARY KEY, " 
                        "gehalt REAL, " 
                        "geburtstag TEXT)");
    if(sqlite3_exec(con, sql, NULL, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }
        
    sqlite3_close(con);

    return 0;
} 