#include <math.h>
#include <graphics.h>
#include <time.h>
#include "functions.h"

int guess()
{
setfillstyle(SOLID_FILL, GREEN);
bar (0, 0, 599, 599);
srand(time(NULL));
outtextxy(260, 150, "esc = return to menu");
outtextxy(260, 300, "INSERT THE KEY");
}