#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include<time.h>

void Ones(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = 1;
        }
    }
}

void Zeros(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = 0;
        }
    }
}

void Random(uint32_t* feld, uint32_t zeilen, uint32_t spalten, uint32_t max) {
    uint32_t i, k;
    srand(time(NULL));

    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = rand() % (max+1);
        }
    }
}

void Ausgabe(uint32_t* feld,  uint32_t zeilen, uint32_t spalten) {
    int32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        printf("|");
        for(k = 0; k < spalten; k++) {
            printf("%3li", (unsigned long)feld[zeilen * i  + k]);
        }
        printf("  |");
        printf("\n");
    }
}

void BubbleSortZeilenweise(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i, k;
    uint32_t temp;
    bool tauschenJA = true;
    while (tauschenJA){   
        tauschenJA = false;
        for(i = 0  ; i < zeilen; i++) {
            for(k = 0; k < spalten-1; k++) {
                if(feld[zeilen * i  + k] > feld[zeilen * i  + k+1]) {
                    tauschenJA = true;
                    temp = feld[zeilen * i  + k];
                    feld[zeilen * i  + k] = feld[zeilen * i  + k + 1];
                    feld[zeilen * i  + k+1] = temp;
                }
                
            }
        }
        
    } 
}

void BubbleSort(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i;
    uint32_t temp;
    bool tauschenJA = true;
    while (tauschenJA){   
        tauschenJA = false;
        for(i = 0  ; i < zeilen * spalten -1; i++) {

            if(feld[i] > feld[i +1]) {
                tauschenJA = true;
                temp = feld[i];
                feld[i] = feld[i  + 1];
                feld[i + 1] = temp;
            }
        }
        
    } 
}

int vergleichen(const void *z1, const void *z2)
{
    return *(uint32_t *)z1 > *(uint32_t *)z2; // aufsteigend 
    // return *(double *)z1 < *(double *)z2; // absteigend 
}


int main() {
    uint32_t feld[10][10];
    uint32_t i;
    Ones(&feld[0][0], 5, 5);
    // Ausgabe(&feld[0][0], 5, 5);
    Random(&feld[0][0], 5, 5, 17);
    Ausgabe(&feld[0][0], 5, 5);
    BubbleSortZeilenweise(&feld[0][0], 5, 5);
    printf("\n");
    Ausgabe(&feld[0][0], 5, 5);
    // BubbleSort(&feld[0][0], 5, 5);
    // printf("\n");
    // Ausgabe(&feld[0][0], 5, 5);

    qsort(&feld[0][0], 25, sizeof(uint32_t), vergleichen);
    printf("\n");
    Ausgabe(&feld[0][0], 5, 5);

    return 0;
}