#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

struct entity {
	int row;
	int col;
	int height;
	int width;

};

struct state {
	struct entity plr;
	struct entity enemy1;
	struct entity soapE;
	struct entity sprayE;
	struct entity winArea;
	int timer;
	// add enemies, endgoal, etc
};

int collision(struct entity e1, struct entity e2);
void initializePlay(void);

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
