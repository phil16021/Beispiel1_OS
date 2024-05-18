#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include "sqlite3.h" 

int ausgabe(void *info, int anzahlFelder,
                        char **feldWert, char **feldName)
{
    double gehalt = atof(feldWert[3]);
    printf("%s ", (char *)info);
        printf("%s, %s, %s, %s, %s\n",   feldName[0],
                                            feldName[1], 
                                            feldName[2], 
                                            feldName[3], 
                                            feldName[4]);
                                            
    printf("%s, %s, %s, %.2f Euro, %s\n",   feldWert[0],
                                            feldWert[1], 
                                            feldWert[2], 
                                            gehalt, 
                                            feldWert[4]);
    return 0;
}

int main()
{
    sqlite3 *con;
    char sql[255], *meldung;
    char info[20] = "Datensatz:";

    if(sqlite3_open("firma.db", &con))
    { 
        printf("Fehler bei Verbindung\n"); 
        return 1; 
        }

    strcpy(sql, "SELECT * FROM personen");
    if(sqlite3_exec(con, sql, ausgabe, info, &meldung))
    { 
        printf("Fehler: %s\n", meldung); return 1; }

    sqlite3_close(con);

    return 0;
} 