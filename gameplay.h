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
char f1[4];
sprintf(f1, "%d", ach[0]);
outtextxy(220, 360, f1);
ach[1]=getch()-48;
if (ach[1]==-21)
return menu();
char f2[4];
sprintf(f2, "%d", ach[1]);
outtextxy(250, 360, f2);
ach[2]=getch()-48;
if (ach[2]==-21)
return menu();
char f3[4];
sprintf(f3, "%d", ach[2]);
outtextxy(280, 360, f3);
ach[3]=getch()-48;
if (ach[3]==-21)
return menu();
char f4[4];
sprintf(f4, "%d", ach[3]);
outtextxy(310, 360, f4);
p1=0;p2=0;
for(i=0;i<=3;i++)
for(j=0;j<=3;j++)
if(qch[i]==ach[j])
p1=p1+1;
char f5[4];
sprintf(f5, "%d", p1);
outtextxy(220, 380, "CORRECT KEYS:");
outtextxy(335, 380, f5);
}