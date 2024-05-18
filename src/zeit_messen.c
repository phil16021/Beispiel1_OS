#include <stdio.h> 
#include <time.h> 
#include <sys/time.h> 

int main()
{
    clock_t c1, c2;
    struct timeval startZeit, endeZeit;
    double differenzZeit;
    int i, k, a = 1;

    for(k=1; k<=5; k++)
    {
        c1 = clock();

        for(i=0; i<1e8; i++)
            a = -a;

        c2 = clock();
        differenzZeit = 1.0 * (c2-c1) / CLOCKS_PER_SEC;
        printf("%f sec.\n", differenzZeit);
    }

    printf("\n");

    for(k=1; k<=5; k++)
    {
        gettimeofday(&startZeit, NULL);

        for(i=0; i<1e8; i++)
            a = -a;

        gettimeofday(&endeZeit, NULL);

        differenzZeit = endeZeit.tv_sec + endeZeit.tv_usec / 1e6 
                        - startZeit.tv_sec - startZeit.tv_usec / 1e6;
        printf("%f sec.\n", differenzZeit);
    }
    return 0;
} 