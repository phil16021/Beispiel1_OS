#include <stdio.h> 
int z = 5;

void ausgabeEins(void)
{
    printf("eins: %d\n", z);
    z = 6;
}
void ausgabeZwei(void)
{
    int z = 3;
    printf("zwei: %d\n", z);
    z = 4;
}
int main(){
    printf("main: %d\n", z);
    ausgabeEins();
    ausgabeZwei();
    ausgabeEins();
    printf("main: %d\n", z);
    return 0;
} 