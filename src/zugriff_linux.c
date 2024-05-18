#include <stdio.h> 
#include <sys/stat.h> 
#define DATEI "Beispiel1_OS.c"

void ausgabeRechte(char *datei)
{
    struct stat attr;
    char vektor[10] = "---------";

    stat(datei, &attr);
    if(attr.st_mode & S_IRUSR) vektor[0] = 'r';
    if(attr.st_mode & S_IWUSR) vektor[1] = 'w';
    if(attr.st_mode & S_IXUSR) vektor[2] = 'x';
    if(attr.st_mode & S_IRGRP) vektor[3] = 'r';
    if(attr.st_mode & S_IWGRP) vektor[4] = 'w';
    if(attr.st_mode & S_IXGRP) vektor[5] = 'x';
    if(attr.st_mode & S_IROTH) vektor[6] = 'r';if(attr.st_mode & S_IWOTH) vektor[7] = 'w';
    if(attr.st_mode & S_IXOTH) vektor[8] = 'x';
    printf("%s Zugriffsrechte\n", vektor);
}

int main()
{
    ausgabeRechte(DATEI);
    chmod(DATEI, S_IRUSR);
    ausgabeRechte(DATEI);
    chmod(DATEI, S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR);
    ausgabeRechte(DATEI);

    return 0;
} 