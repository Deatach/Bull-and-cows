#include "gameplay.h"

int menu()
{
{
	srand(time(NULL));
    setfillstyle(SOLID_FILL, BLACK);
    bar (0, 0, 599, 599);
    outtextxy(260, 300, "byky i korovi");
    outtextxy(260, 330, "1 -  start game");
    outtextxy(260, 360, "2 -  authors");
    outtextxy(260, 390, "3 -  exit");
}
    code = getch();
    
    if ( code == 49 ) 
    {
	generate();	
	printch();
	guess();
    }
    
    if ( code == 50 ) 
    {
	bar (0, 0, 599, 599);
	auth();
	delay(3000);
	return menu();
    }
    
    if ( code == 51 ) 
    {
	return 0;
    }
    
    
    if ( (code != 51) and (code != 50) and (code !=49) ) 
    {
	return menu();
    }
}

main()
{
    initwindow(600, 600);
    menu();
}
