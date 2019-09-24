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
if(qch[0]==ach[0]) p2=p2+1;
if(qch[1]==ach[1]) p2=p2+1;
if(qch[2]==ach[2]) p2=p2+1;
if(qch[3]==ach[3]) p2=p2+1;
char f6[4];
sprintf(f6, "%d", p2);
outtextxy(147, 400, "CORRECT KEYS ON RIGHT PLACES:");
outtextxy(390, 400, f6);
if((ach[0]==ach[1])or(ach[0]==ach[2])or(ach[0]==ach[3])or(ach[1]==ach[2])or(ach[1]==ach[3])or(ach[2]==ach[3])or(ach[0]==0))
{
setfillstyle(SOLID_FILL, GREEN);
bar (119, 359, 599, 599);
outtextxy(150, 420, "INCORRECT. TRY AGAIN");
delay(2500);
bar (119, 359, 599, 599);
return guess();;
if(p1==4 and p2==4)
{
printf("You win\n");
outtextxy(150, 420, "YOU WON, HUMAN");
delay(4000);
bar (119, 359, 599, 599);
outtextxy(150, 420, "NEW GAME?");
outtextxy(150, 440, "ESC=MENU");
outtextxy(150, 460, "PRESS KEY=CONTINUE");
code = getch();
if ( code == 27 ) 
{
return 0;
}
else
{
generate();
printch();
bar (119, 359, 599, 599);
return guess();
}
}
}
}