#include <stdio.h> 
void ausgabe(void)
{
    static int z = 5;
    printf("Wert: %d\n", z);
    z++;
}
int main()
{
    ausgabe();
    ausgabe();
    ausgabe();
    return 0;
} 