#include <stdio.h> 

int main()
{
    double d;
    for(d = 1.3; d <= 7.0; d = d + 1.5)
        printf("%5.1f", d);
    return 0;
} 