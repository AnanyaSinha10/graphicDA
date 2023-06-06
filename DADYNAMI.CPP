#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=1;i<600;i+=5)
{
setfillstyle(SOLID_FILL,WHITE);
circle(500,75,40);
floodfill(502,77,15);
line(0,400,800,400);
circle(30+i,280,20);
circle(40+i,280,3);
arc(30+i,240,280,290,50);
line(30+i,300,11+i,345);
line(30+i,300,56+i,342);
arc(30+i,300,250,300,50);
line(30+i,330,70+i,275);
if(i%2==0)
{
line(30+i,350,25+i,400);
line(30+i,350,10+i,400);
}
else
{
line(30+i,350,35+i,400);
delay(20);
}
char data2[]="girl walking under the moonlight";
outtextxy(150,405,data2);
delay(170);
cleardevice();
}
getch();
closegraph();
return 0;
}