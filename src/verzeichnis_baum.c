#include <stdio.h> 
#include <string.h> 
#include <sys/stat.h> 
#include <dirent.h> 

#define VERZEICHNIS "/home/philipp/Musik"

void listeVerzeichnis(char *verzeichnisName)
{
    DIR *verzeichnisZeiger;
    struct dirent *eintragZeiger;
    struct stat attr;
    char pfadName[1024];

    verzeichnisZeiger = opendir(verzeichnisName);

    while(eintragZeiger = readdir(verzeichnisZeiger))
    {
        if(strcmp(eintragZeiger->d_name, ".")
                            && strcmp(eintragZeiger->d_name, ".."))
        {
            strcpy(pfadName, verzeichnisName);
            strcat(pfadName, "/");
            strcat(pfadName, eintragZeiger->d_name);
            printf("%s\n", pfadName);
            stat(pfadName, &attr);

            if(S_ISDIR(attr.st_mode))
                listeVerzeichnis(pfadName);
        }
    }
    closedir(verzeichnisZeiger);
}

int main()
{
    listeVerzeichnis(VERZEICHNIS);
    return 0;
} 