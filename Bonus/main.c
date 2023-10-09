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

#include <locale.h>

/******************************************/
/*   TPC2021 no 1 Exo Bonus                */
/*                                        */
/******************************************/


// Soit la déclaration de deux variables suivantes :
unsigned int var1 = 0x04030201;
unsigned char wordOfTheDay[] = "Hello Junia";

// Ecrire le code qui permet d'afficher l'adresse de var1 et sa valeur en décimal sous la forme
// 0x0093A038 : 67305985
// puis afficher en hexa sur 2 digits, les 32 valeurs, séparées par un espace, des 32 octets situés à partir de
// l'adresse de var1.
// afficher en bout de ligne la représentation des ces valeurs sous la forme de caractères ASCII.
// Commenter l'affichage (contenu des octets, boutisme, structure de la chaine de caractère en mémoire).
// Affichage attendu :
// 01 02 03 04 48 65 6C 6C 6F 20 4A 75 6E 69 61 00 00 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00   ☺ ☻ ♥ ♦ H e l l o   J u n i a      ☺    ☺    ☺

int main() {


	// definition des paramètres régionaux pour un affichage avec les caractères accentués
	setlocale(LC_ALL, "fr-FR");







	return EXIT_SUCCESS;
}
