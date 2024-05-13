#include <stdio.h> 
void doubleFunktion(double x)
{
    printf("doubleFunktion\n");
}

void floatFunktion(float x)
{
    printf("floatFunktion\n");
}

void intFunktion(int x)
{
    printf("intFunktion\n");
}

#define meineFunktion(x) _Generic((x), double: doubleFunktion, float: floatFunktion, default: intFunktion)(x)

int main()
{
    meineFunktion(1.0);
    meineFunktion(1.0f);
    meineFunktion(1);
    return 0;
} 