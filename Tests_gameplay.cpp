#include "functions.h"

int i,j,p1,p2,code;
char f1[4],f2[4],f3[4],f4[4],f5[4];

void Test_not_random_generate()
{
    q=1097;
    qch[0]=q/1000;
    qch[1]=q/100-qch[0]*10;
    qch[2]=q/10-qch[1]*10-qch[0]*100;
    qch[3]=q-10*qch[2]-100*qch[1]-1000*qch[0];
    return;
}

void Test_numbers()
{
	setfillstyle(SOLID_FILL, GREEN);
	bar (0, 0, 599, 599);
	outtextxy(260, 150, "esc = return to menu");
	outtextxy(260, 300, "INSERT THE KEY(Test N=1097)");
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
}

void Mathem()
{
	p1=0;p2=0;
	for(i=0;i<=3;i++)
	for(j=0;j<=3;j++)
	if(qch[i]==ach[j])
	p1=p1+1;
	char f5[4];
	sprintf(f5, "%d", p1);
	char f6[4];
}

void Test_correct_incorrect()
{
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
}

main()
{
	Test_not_random_generate();
	printch();
	initwindow(600, 600);
	Test_numbers();
	Mathem();
	Test_correct_incorrect();
	delay(1000);
}
