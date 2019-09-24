#include <math.h>
#include <graphics.h>
#include <time.h>
#include "functions.h"

int p1,p2;

int guess()
{
setfillstyle(SOLID_FILL, GREEN);
bar (0, 0, 599, 599);
srand(time(NULL));
outtextxy(260, 150, "esc = return to menu");
outtextxy(260, 300, "INSERT THE KEY");
ach[0]=getch()-48;
if (ach[0]==-21)
return menu();
}