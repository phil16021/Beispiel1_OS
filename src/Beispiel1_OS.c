/*
 ============================================================================
 Name        : Beispiel1_OS.c
 Author      : philipp
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "Beispiel1_OS.h"

int main(void) {
	double einzelpreis = 1.45;

	printf("Anzahl        Preis\n");
	for(uint32_t i = 0; i < 10; i++) {
		printf("%6d", i+1);
		printf("%8.2f Euro\n",einzelpreis * (i + 1));
	}

	return EXIT_SUCCESS;
}
