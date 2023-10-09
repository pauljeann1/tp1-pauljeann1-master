// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
#include <limits.h>

/******************************************/
/*   TPC2022 no 1  exo1                   */
/*                                        */
/******************************************/

// le type 'char' caract�rise un entier positif cod� sur 8 bits compris entre -128 et +127,
// le bit de poids fort sert au codage du signe.
// un 'unsigned char' pourra donc repr�senter un nombre positif compris en 0 et 255, 
// soit 256 valeurs.
// La repr�sentation en hexad�cimale de 255 est FF (not�e 0xFF)
// Le type bool�en n'existe pas en C90, une valeur non nulle 
// dans une expression logique est comprise comme 'VRAI'.
// La prise en charge du type bool�en peut se faire en ajoutant une directive #include <stdbool.h>

// Compl�ter le code par des appels � la fonction d�affichage printf pour afficher la valeur 
// de chacune des variables dans un format correct. Attention, le choix du filtre %, modifie le r�sultat
// car il r�alise une conversion de la donn�e avant son affichage dans le format souhait�.
// Donc, ce qui s�affiche est ce qui a �t� demand�, et pas n�cessairement la donn�e dans son format d�origine.
// Donner pour chaque type, le nombre d�octets utilis�s pour le codage, et indiquer quelle valeur minimum
// et quelle valeur maximum(dynamique) on peut repr�senter avec une variable qui aurait ce type.
// Donner la r�ponse sous la forme de commentaires dans votre fichier source.

// d�finition de type

typedef unsigned char byte;

int main() { // accolade ouvrante = d�but de bloc d'instructions
	// D�claration de variables r�serv�es au main(), et initialisations facultatives
	char OneLetter = 'A'; // codé sur 8 bits, compris entre -128 et +127
	char AnOtherLetter = 66; // codé sur 8 bits, compris entre -128 et +127
	byte toto = 0; // codé sur 8 bits, compris entre -128 et +127
	unsigned char VerySmallCounter = 255; // codé sur 8 bits, compris entre -128 et +127
	short SmallCounter = 32767; // codé sur 16 bits, compris entre -32 768 et +32 768
	int Counter = 0; // codé sur 32 bits, compris entre -2 147 483 648 et + 2 147 483 647
	long LargeCounter = 2147483647; // codé sur 32 bits, compris entre -2 147 483 648 et + 2 147 483 647
	unsigned long FullRangeLargeCounter = 4294967295; // codé sur 32 bits, compris entre -2 147 483 648 et + 2 147 483 647
	int ChienDeGarde = 0; // codé sur 32 bits, compris entre -2 147 483 648 et + 2 147 483 647
	float Dim1 = 1.414F; // codé sur 32 bits, compris entre -2 147 483 648 et + 2 147 483 647
	double Dim2 = .5; // codé sur 64 bits, compris entre 1.7*10^(-38) et 1.7*10^(-38)
	bool TestResult = 1;
	// Déclaration de constante
	const double Pi = 3.14159265;
	// les instructions du programme principal : main()
	/********** Debut de programme *****************/
	printf("\n");
	printf("exemple d'affichage d'un caractere %c, codage sur %d octets\n", OneLetter, sizeof(OneLetter));
	printf("exemple d'affichage d'un caractere %c, codage sur %d octets\n", AnOtherLetter, sizeof(AnOtherLetter));
	printf("exemple d'affichage d'un byte %d, codage sur %d octets\n", toto, sizeof(toto));
	printf("exemple d'affichage d'un entier %u, codage sur %d octets\n", VerySmallCounter, sizeof(VerySmallCounter));
	printf("exemple d'affichage d'un long entier %u, codage sur %d octets\n", SmallCounter, sizeof(SmallCounter)); 
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", Counter, sizeof(Counter)); // codé sur 4 octets donc 
	printf("exemple d'affichage d'un entier tres long %d, codage sur %d octets\n", LargeCounter, sizeof(LargeCounter));
	printf("exemple d'affichage d'un entier tres long non signe %u, codage sur %d octets\n", FullRangeLargeCounter, sizeof(FullRangeLargeCounter));
	printf("exemple d'affichage d'un entier %d, codage sur %d octets\n", ChienDeGarde, sizeof(ChienDeGarde));
	printf("exemple d'affichage d'un float %f, codage sur %d octets\n", Dim1, sizeof(Dim1));
	printf("exemple d'affichage d'un double float %f, codage sur %d  octets\n", Dim2, sizeof(Dim2)); // il est codé sur 8 octets donc 64 bits 
	printf("exemple d'affichage d'un booleen %d, codage sur %d octets\n", TestResult, sizeof(TestResult));
	printf("exemple d'affichage de pi %f, codage sur %d octets\n", Pi, sizeof(Pi));

	/*********** Fin de programme ******************/

	return(EXIT_SUCCESS);
} // accolade fermante = fin de bloc d'instructions


