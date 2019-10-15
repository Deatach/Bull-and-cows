#include "gameplay.h"

int auth()
{
    Erase();
    outtextxy(310, 360, "Evgeniy Procopiew");
    outtextxy(310, 390, "Nikita Mironov");
}

int menu()
{
{
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
	Erase();
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

