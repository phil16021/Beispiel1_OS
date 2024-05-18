#include <stdio.h> 
#include <time.h> 

int main()
{
    time_t jetzt;
    struct tm jetztUTC;

    time(&jetzt);
    printf("Sekunden seit 01.01.1970, 00:00 Uhr: %ld\n", jetzt);

    jetztUTC = *gmtime(&jetzt);
    printf("UTC: %02d:%02d:%02d\n", jetztUTC.tm_hour,
                                    jetztUTC.tm_min, 
                                    jetztUTC.tm_sec);

    printf("asctime(): %s", asctime(&jetztUTC));

    printf("ctime(): %s", ctime(&jetzt));
    
    return 0;
} 