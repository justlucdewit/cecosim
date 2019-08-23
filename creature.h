typedef struct{
	int lives;
	char* report;
} creature;

creature createCreature(char* msg){
	creature c;
	c.lives = 100;
	c.report = msg;

	return c;
}