#include <math.h>
#include <graphics.h>
#include <time.h>
#include "gameplay.h"

int menu()
{
    setfillstyle(SOLID_FILL, BLACK);
    bar (0, 0, 599, 599);
    outtextxy(260, 300, "byky i korovi");
    outtextxy(260, 330, "1 -  start game");
    outtextxy(260, 360, "2 -  authors");
    outtextxy(260, 390, "3 -  exit");
}


main()
{
    initwindow(600, 600);
    menu();
}
