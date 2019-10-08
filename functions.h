#include <math.h>
#include <graphics.h>
#include <time.h>

int q;
int qch[4], ach[4];

void generate()
{
    q=(rand()%9000+1000);
    qch[0]=q/1000;
    qch[1]=q/100-qch[0]*10;
    qch[2]=q/10-qch[1]*10-qch[0]*100;
    qch[3]=q-10*qch[2]-100*qch[1]-1000*qch[0];
    if ((qch[0]==qch[1])or(qch[0]==qch[2])or(qch[0]==qch[3])or(qch[1]==qch[2])or(qch[1]==qch[3])or(qch[2]==qch[3]))
    
    return generate();
    
    else
        
    return;
}


void printch()
{
    printf("%d\n",q);
}

int auth()
{
    bar (119, 359, 599, 599);
    outtextxy(310, 360, "Evgeniy Procopiew");
    outtextxy(310, 390, "Nikita Mironov");
}

