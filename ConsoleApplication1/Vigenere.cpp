// ConsoleApplication1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main() {
	//encoding-chiffre
	char chiffre[27][27];
	char x = '@';
	for (int i = 0; i < 27; i++) {
		for (int c = 0; c < 27; c++) {
			chiffre[i][c] = x;
			x++;
			if (x > 'Z') {
				x = (x % 'Z') + '?';
			}
		}
		x = x + 1;
	}
	printf("Encode-Tabelle: \n");
	printf("    | @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
	printf("----+-------------------------------------------------------\n");
	char letter1 = '@';
	for (int e = 0; e < 27; e++) {
		printf(" %c  |", letter1);
		for (int r = 0; r < 27; r++) {
			printf("%2c", chiffre[e][r]);
		}
		letter1 = letter1 + 1;
		printf("\n");
	}
	//decoding-chiffre -> um 26 verschoben(letzte Zeile) vorletzte 25 usw...
	char dechiffre[27][27];
	int y = 0;
	int z = 0;
	char w = '@';
	for (int a = 0; a < 27; a++) {
		for (int b = 0; b < 27; b++) {
			dechiffre[a][b] = w;
			w++;
			if (w > 'Z') {
				w = (w % 'Z') + '?';
			}
		}
		w = w - 1;
	}
	printf("\nDecode-Tabelle: \n");
	printf("    | @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
	printf("----+-------------------------------------------------------\n");
	char letter2 = '@';
	for (int k = 0; k < 27; k++) {
		printf(" %c  |", letter2);
		for (int l = 0; l < 27; l++) {
			printf("%2c", dechiffre[k][l]);
		}
		printf("\n");
		letter2 = letter2 + 1; 
	}
	return 0;
}