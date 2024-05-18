#include <stdio.h> 

#ifdef __unix__ 
#include <sys/stat.h> 
#include <unistd.h> 
#elif __WIN32__ 
#include <dir.h> 
#endif 

int main()
{
    char verzeichnisName[256];

    if(getcwd(verzeichnisName, 256) == NULL)
    { 
        printf("Keine Abfrage des Verzeichnisnamens\n"); 
        return 1; 
        }
    else
    {
        printf("%s\n", verzeichnisName);
    }

    

    #ifdef __unix__ 
    if(mkdir("neu", S_IRUSR | S_IWUSR | S_IXUSR))
    #elif __WIN32__ 
    if(mkdir("neu"))
    #endif 

    { 
        printf("Kein Erzeugen des Verzeichnisses\n"); 
        return 1; 
        }

    if(chdir("neu"))
    { 
        printf("Kein Wechsel des Verzeichnisses\n"); 
        return 1; 
        }

    getcwd(verzeichnisName, 256);
    printf("%s\n", verzeichnisName);

    chdir("..");

    if(rmdir("neu"))
    { 
        printf("Kein Entfernen des Verzeichnisses\n"); 
        return 1; 
        }
        
    getcwd(verzeichnisName, 256);
    printf("%s\n", verzeichnisName);
    return 0;
} 