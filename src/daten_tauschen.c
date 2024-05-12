#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>

void TauscheWerte(uint32_t*, uint32_t*);

void TauscheWerte(uint32_t *wert1, uint32_t *wert2)
{
    uint32_t temp;
    temp = *wert1;
    *wert1 = *wert2;
    *wert2 = temp;
}
int main()
{
    
    int a = 10, b = 25;
    printf("Vor Tauschen: a = %lu, b = %lu \n", 
                            (unsigned long)a, (unsigned long)b);

    TauscheWerte(&a, &b);

    printf("Nach Tauschen: a = %lu, b = %lu \n",
                            (unsigned long)a, (unsigned long)b);

    TauscheWerte(&a, &b);

    printf("Nach zweitem Tauschen: a = %lu, b = %lu \n",
                            (unsigned long)a, (unsigned long)b);
                            
    printf("\n\n\n");
} 