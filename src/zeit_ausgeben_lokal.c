#include <stdio.h> 
#include <time.h>   

int main()
{
    time_t jetzt;
    struct tm jetztLokal;

    char tagFeld[7][20] = {"Sonntag", "Montag", "Dienstag",
                    "Mittwoch", "Donnerstag", "Freitag", "Samstag"};
    char monatFeld[12][20] = {"Januar", "Februar", "Maerz",
                "April", "Mai", "Juni", "Juli", "August", 
                "September", "Oktober", "November", "Dezember"};
    char aus[100];

    time(&jetzt);
    jetztLokal = *localtime(&jetzt);
    printf("localtime(): %02d.%02d.%d %02d:%02d:%02d\n",
                                    jetztLokal.tm_mday, 
                                    jetztLokal.tm_mon + 1,
                                    jetztLokal.tm_year + 1900, 
                                    jetztLokal.tm_hour,
                                    jetztLokal.tm_min, 
                                    jetztLokal.tm_sec);

    strftime(aus, 99, "%a %b %d %H:%M:%S %Y", &jetztLokal);
    printf("strftime(): %s\n", aus);
    
    printf("Wochentag: %s\n", tagFeld[jetztLokal.tm_wday]);
    printf("Monat: %s\n", monatFeld[jetztLokal.tm_mon]);
    printf("Tag des Jahres: %d\n", jetztLokal.tm_yday + 1);

    if(jetztLokal.tm_isdst > 0) 
        printf("Sommerzeit: Ja\n");
    else 
        printf("Sommerzeit: Nein\n");

    return 0;
} 