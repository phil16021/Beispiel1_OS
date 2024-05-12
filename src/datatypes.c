#include <stdio.h> 
#include <limits.h> 
#include <float.h> 

int main()
{
    /* Wertebereiche, Speichergrößen */ 
    printf("char: %lu Byte %d ... %d\n",
                    sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char: %lu Byte %d ... %u\n\n",
                    sizeof(unsigned char), 0, UCHAR_MAX);
    printf("short: %lu Byte %d ... %d\n",
                    sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short: %lu Byte %d ... %u\n\n",
                    sizeof(unsigned short), 0, USHRT_MAX);
    printf("int: %lu Byte %d ... %d\n",
                    sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int: %lu Byte %d ... %u\n\n",
                    sizeof(unsigned int), 0, UINT_MAX);
    printf("long: %lu Byte %ld ... %ld\n",
                    sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long: %lu Byte %d ... %lu\n\n",
                    sizeof(unsigned long), 0, ULONG_MAX);
    printf("long long: %lu Byte %lld ... %lld\n",
                    sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: %lu Byte %d ... %llu\n\n",
                    sizeof(unsigned long long), 0, ULLONG_MAX);
    /* Andere Zahlensysteme */ 
    printf("Oktal: %o + 1 = %o, %o + 1 = %o\n", 31, 32, 255, 256);
    printf("Hexadezimal: %X + 1 = %X, %X + 1 = %X\n",
    31, 32, 255, 256);

    /* Wertebereiche, Exponentialausgabe */ 
    printf("float: %2lu Byte %e ... %e\n",
                    sizeof(float), FLT_MIN, FLT_MAX);
    printf("double: %2lu Byte %e ... %e\n",
                    sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double: %lu Byte %Le ... %Le\n\n",
                    sizeof(long double), LDBL_MIN, LDBL_MAX);
    /* Genauigkeit */ 
    float fa = 1.0f / 7.0f;
    double da = 1.0 / 7.0;
    long double la = 1.0l / 7.0l;
    
    printf("1/7 in float: %.25f\n", fa);
    printf("1/7 in double: %.25f\n", da);
    printf("1/7 in long double: %.25Lf\n", la);

    return 0;

} 