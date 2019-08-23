typedef struct{
	int health;//current amount of health
	int maxhealth;//max amount of health
	char* species;//species type
} creature;

creature createCreature(char* species, int maxhealth){
	creature c;
	c.species = species;
	c.health = maxhealth;
	c.maxhealth = maxhealth;
	return c;
}

void status(creature c){
	printf("species:\t%s\n", c.species);
	printf("health:\t\t%d\n", c.health);
}