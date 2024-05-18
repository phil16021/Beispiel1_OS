#include <stdio.h> 
#include <dirent.h> 

int main()
{
    DIR *verzeichnisZeiger;
    struct dirent *eintragZeiger;

    if(!(verzeichnisZeiger = opendir(".")))
    {
        printf("Kein Lesen des Verzeichnisses\n");
        return 1;
    }

    while((eintragZeiger = readdir(verzeichnisZeiger)))
        if(eintragZeiger->d_name[0] == 'b')
            printf("%s\n", eintragZeiger->d_name);

    rewinddir(verzeichnisZeiger);

    while((eintragZeiger = readdir(verzeichnisZeiger)))
        if(eintragZeiger->d_name[0] == 'k')
            printf("%s\n", eintragZeiger->d_name);

    closedir(verzeichnisZeiger);
    
    return 0;
} 