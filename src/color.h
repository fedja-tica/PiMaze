#ifndef __COLOR_H__
#define __COLOR_H__

#include "definitions.h"

/*  
 *	Banggood displej ima 18-bitni color space. Svaka komponenta
 *	(R, G, B) je definisana sa 6 bita, stoga koristimo char za
 *	smjestanje vrijednosti. Dva najznacajnija bita cemo ignorisati.
 */

struct _Color {
	char red;
	char green;
	char blue;
};

typedef struct _Color Color;

/* Konstruktor za boju */
Color setColor(char red, char green, char blue);

#endif