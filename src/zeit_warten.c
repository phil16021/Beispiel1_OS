#include <stdio.h> 
#ifdef __unix__ 
#include <unistd.h> 
#elif __WIN32__ 
#include <windows.h> 
#endif 

int main()
{
    int i;
    #ifdef __unix__ 
    setbuf(stdout, NULL);
    #endif 

    for(i=0; i<5; i++)
    {
        printf("%d ", i);
        #ifdef __unix__ 
        sleep(1);
        #elif __WIN32__ 
        Sleep(1000);
        #endif 
    }

    printf("\n");
    
    return 0;
} 