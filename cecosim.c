#include <stdio.h>
#include "creature.h"

void main(void){
	creature wolf1 = createCreature("hey there i am a wolf yo");
	printf(wolf1.report);
}