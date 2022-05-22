#include<Stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 rectangle(150,100,300,200);
 line(150,200,180,300);
 line(300,200,350,300);
 line(180,300,350,300);
 outtextxy(200,140,"WELCOME");
 rectangle(240,275,280,295);
 outtextxy(190,220,"[][][][]");
 outtextxy(200,240,"[][][][]");
 outtextxy(210,260,"[][][][]");

getch();
}