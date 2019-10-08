#include "functions.h"

main()
{
	srand(time(NULL));
	generate();	
	printch();
	delay(2500);
	initwindow(600, 600);
	bar (0, 0, 599, 599);
	auth();
	delay(2500);
}
