#include <stdio.h> 

int main()
{
    #ifdef __unix__ 
    printf("Unix\n");
    #elif __WIN32__ 
    printf("Win32\n");
    #elif __WIN64__ 
    printf("Win64\n");
    #endif 
    return 0;
} 