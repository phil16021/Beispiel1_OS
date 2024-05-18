#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main()
{
    char kommando[100];
    #ifdef __unix__ 
    strcpy(kommando, "ls -l b*.c");
    #elif __WIN32__ 
    strcpy(kommando, "dir a*.c");
    #endif 
    system(kommando);
    return 0;
} 