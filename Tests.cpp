#include "functions.h"

main()
{
	srand(time(NULL));
	generate();	
	printch();
	delay(10000);
	generate();	
	printch();
	delay(2500);
	initwindow(600, 600);
	setfillstyle(SOLID_FILL, GREEN);
	bar (0, 0, 599, 599);
	outtextxy(260, 150, "esc = return to menu");
	outtextxy(260, 300, "INSERT THE KEY");
	ach[0]=getch()-48;
	char f1[4];
	sprintf(f1, "%d", ach[0]);
	outtextxy(220, 360, f1);
	ach[1]=getch()-48;
	char f2[4];
	sprintf(f2, "%d", ach[1]);
	outtextxy(250, 360, f2);
	ach[2]=getch()-48;
	char f3[4];
	sprintf(f3, "%d", ach[2]);
	outtextxy(280, 360, f3);
	ach[3]=getch()-48;
	char f4[4];
	sprintf(f4, "%d", ach[3]);
	outtextxy(310, 360, f4);
	//initwindow(600, 600);
	//bar (0, 0, 599, 599);
//	auth();
	delay(2500);
}
