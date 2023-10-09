// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/******************************************/
/*   TPC2022 no 1  exo 3                  */
/*                                        */
/******************************************/

// Compléter le code suivant afin d'afficher une table de caractères ASCII étendues
// La table est organisée suivant 8 colonnes de 32 lignes.
// Chaque colonne présente le code en décimal aligné à gauche sur deux caracartères,
// Le code caractère en héxadécimal Majuscule sur deux caractères avec un zéro en tête quand il n'y a qu'un seul digit.
// Le caractère lui-même qui sera remplacé par un caractère espace lorsqu'un code spécial perturbe l'affichage.
// 

int main() {
	// definition des paramètres régionaux pour un affichage avec les caractères accentués
	setlocale(LC_ALL, "fr-FR");
	int ligne;
	ligne = 0;
	int variable;
	for (int y=0;y < 32;y++) {
		for (int x=0;x < 8;x++) {
			variable = ligne + (32 * x);

			if ((variable != 10) && (variable != 13) && (variable != 27) && (variable != 0) && (variable !=32) && (variable != 160) && (variable != 7) && (variable != 8) && (variable != 9) && (variable != 10) && (variable != 173)) {
				printf("%3d %02x %c           ", variable, variable, variable);
			}
			else
				printf("%3d %02x              ", variable, variable);
		}
		printf("\n");
		ligne += 1;
	}






	return EXIT_SUCCESS;
}
// 0 00      32 20      64 40 @    96 60 `   128 80 ?   160 A0     192 C0 À   224 E0 à
// 1 01 ☺    33 21 !    65 41 A    97 61 a   129 81 ?   161 A1 ¡   193 C1 Á   225 E1 á
// 2 02 ☻    34 22 "    66 42 B    98 62 b   130 82 '   162 A2 ¢   194 C2 Â   226 E2 â
// 3 03 ♥    35 23 #    67 43 C    99 63 c   131 83 ƒ   163 A3 £   195 C3 Ã   227 E3 ã
// 4 04 ♦    36 24 $    68 44 D   100 64 d   132 84 "   164 A4 ¤   196 C4 Ä   228 E4 ä
// 5 05 ♣    37 25 %    69 45 E   101 65 e   133 85 .   165 A5 ¥   197 C5 Å   229 E5 å
// 6 06 ♠    38 26 &    70 46 F   102 66 f   134 86 ┼   166 A6 ¦   198 C6 Æ   230 E6 æ
// 7 07      39 27 '    71 47 G   103 67 g   135 87 ╬   167 A7 §   199 C7 Ç   231 E7 ç
// 8 08      40 28 (    72 48 H   104 68 h   136 88 ^   168 A8 ¨   200 C8 È   232 E8 è
// 9 09      41 29 )    73 49 I   105 69 i   137 89 %   169 A9 ©   201 C9 É   233 E9 é
//10 0A      42 2A *    74 4A J   106 6A j   138 8A S   170 AA ª   202 CA Ê   234 EA ê
//11 0B ♂    43 2B +    75 4B K   107 6B k   139 8B <   171 AB «   203 CB Ë   235 EB ë
//12 0C ♀    44 2C ,    76 4C L   108 6C l   140 8C O   172 AC ¬   204 CC Ì   236 EC ì
//13 0D      45 2D -    77 4D M   109 6D m   141 8D ?   173 AD ­    205 CD Í   237 ED í
//14 0E ♫    46 2E .    78 4E N   110 6E n   142 8E Z   174 AE ®   206 CE Î   238 EE î
//15 0F ☼    47 2F /    79 4F O   111 6F o   143 8F ?   175 AF ¯   207 CF Ï   239 EF ï
//16 10 ►    48 30 0    80 50 P   112 70 p   144 90 ?   176 B0 °   208 D0 Ð   240 F0 ð
//17 11 ◄    49 31 1    81 51 Q   113 71 q   145 91 '   177 B1 ±   209 D1 Ñ   241 F1 ñ
//18 12 ↕    50 32 2    82 52 R   114 72 r   146 92 '   178 B2 ²   210 D2 Ò   242 F2 ò
//19 13 ‼    51 33 3    83 53 S   115 73 s   147 93 "   179 B3 ³   211 D3 Ó   243 F3 ó
//20 14 ¶    52 34 4    84 54 T   116 74 t   148 94 "   180 B4 ´   212 D4 Ô   244 F4 ô
//21 15 §    53 35 5    85 55 U   117 75 u   149 95     181 B5 µ   213 D5 Õ   245 F5 õ
//22 16 ▬    54 36 6    86 56 V   118 76 v   150 96 -   182 B6 ¶   214 D6 Ö   246 F6 ö
//23 17 ↨    55 37 7    87 57 W   119 77 w   151 97 -   183 B7 ·   215 D7 ×   247 F7 ÷
//24 18 ↑    56 38 8    88 58 X   120 78 x   152 98 ~   184 B8 ¸   216 D8 Ø   248 F8 ø
//25 19 ↓    57 39 9    89 59 Y   121 79 y   153 99 T   185 B9 ¹   217 D9 Ù   249 F9 ù
//26 1A →    58 3A :    90 5A Z   122 7A z   154 9A s   186 BA º   218 DA Ú   250 FA ú
//27 1B      59 3B ;    91 5B [   123 7B {   155 9B >   187 BB »   219 DB Û   251 FB û
//28 1C ∟    60 3C <    92 5C \   124 7C |   156 9C o   188 BC ¼   220 DC Ü   252 FC ü
//29 1D ↔    61 3D =    93 5D ]   125 7D }   157 9D ?   189 BD ½   221 DD Ý   253 FD ý 
//30 1E ▲    62 3E >    94 5E ^   126 7E ~   158 9E z   190 BE ¾   222 DE Þ   254 FE þ
//31 1F ▼    63 3F ?    95 5F _   127 7F ⌂   159 9F Y   191 BF ¿   223 DF ß   255 FF ÿ