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

    strcpy(sql, "INSERT INTO personen VALUES('Maier', " 
                        "'Hans', 6714, 3500, '15.03.1962')");
    if(sqlite3_exec(con, sql, NULL, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }

    strcpy(sql, "INSERT INTO personen VALUES('Schmitz', " 
                            "'Peter', 81343, 3750, '12.04.1958')");
    if(sqlite3_exec(con, sql, NULL, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }

    strcpy(sql, "INSERT INTO personen VALUES('Mertens', " 
                            "'Julia', 2297, 3621.5, '30.12.1959')");
    if(sqlite3_exec(con, sql, NULL, NULL, &meldung))
    { 
        printf("Fehler: %s\n", meldung); 
        return 1; 
        }

    sqlite3_close(con);
    
    return 0;
} 