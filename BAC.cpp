#include <math.h>
#include <graphics.h>
#include <time.h>
#include "gameplay.h"

int menu()
{
    setfillstyle(SOLID_FILL, BLACK);
    bar (0, 0, 599, 599);
    outtextxy(250, 300, "byky i korovi");
    outtextxy(250, 320, "1 -  start game");
    outtextxy(250, 350, "2 -  authors");
    outtextxy(250, 400, "3 -  exit");
}


main()
{
    initwindow(600, 600);
    menu();
}
