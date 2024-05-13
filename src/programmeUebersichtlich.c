#include <stdio.h> 
int summe(int, int);

int main()
{
    int a = 12, b = 7;
    printf("Summe: %d\n", summe(a, b));
    return 0;

}

int summe(int x, int y)
{
    int z;
    z = x + y;
    return z;
} 