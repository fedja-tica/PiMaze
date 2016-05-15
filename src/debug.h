#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "definitions.h"

#include "color.h"
#include "grid.h"

/* Ispisuje RGB komponente boje specificirane u argumentu */
void printColor(Color color);
/* Ispisuje labirint u konzoli, prima pokaziva radi efikasnosti */
void printMaze(Grid *maze);

#endif