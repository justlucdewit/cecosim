#include <stdio.h>
#include "creature.h"
#include "luketools.h"

void main(void){
	//clear();
	creature wolf1 = createCreature("wolf", 100);
	printf(wolf1.species);
	status(wolf1);
}