#include <stdio.h> 
#include <time.h> 

int main()
{
    time_t ttJetzt;
    struct tm stJetzt, stGeburt;
    int alter;

    time(&ttJetzt);
    stJetzt = *localtime(&ttJetzt);
    stGeburt.tm_mday = 8;
    stGeburt.tm_mon = 11;
    stGeburt.tm_year = 82;

    alter = stJetzt.tm_year - stGeburt.tm_year;

    if(stJetzt.tm_mon < stGeburt.tm_mon ||
        (stJetzt.tm_mon == stGeburt.tm_mon
         && stJetzt.tm_mday < stGeburt.tm_mday))
            alter--;
            
    printf("Alter: %d\n", alter);
    return 0;
} 