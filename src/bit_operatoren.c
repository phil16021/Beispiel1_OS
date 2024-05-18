#include <stdio.h> 

int main()
{
    unsigned char a, b, bit0, bit3, erg;
    /* Nur 1 Bit gesetzt */ 
    bit0 = 1; // 0000 0001 
    bit3 = 8; // 0000 1000 
    /* Bitweises Und */ 
    a = 5; // 0000 0101 
    erg = a & bit0; // 0000 0001 
    if(erg) printf("&: %d ist ungerade\n", a);
    /* Bitweises Oder */ 
    erg = 0; // 0000 0000 
    erg = erg | bit0; // 0000 0001 
    erg = erg | bit3; // 0000 1001 
    printf("|: Bits nacheinander gesetzt: %d\n", erg);
    /* Bitweises Exclusive-Oder */ 
    a = 21; // 0001 0101 
    b = 19; // 0001 0011 
    erg = a ^ b; // 0000 0110 
    printf("^: Ungleiche Bits: %d\n", erg);
    /* Bitweise Inversion */ 
    a = 11; // 0000 1011 
    erg = ~a; // 1111 0100 
    printf("~: Bits umgedreht: %d\n", erg);
    /* Bitweise schieben */ 
    a = 11; // 0000 1011 
    erg = a >> 1; // 0000 0101 
    printf(">>: Um 1 nach rechts geschoben: %d\n", erg);
    erg = a << 2; // 0010 1100 
    printf("<<: Um 2 nach links geschoben: %d\n", erg);
    return 0;
}