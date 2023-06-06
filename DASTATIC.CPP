#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
int gm,x,y,gd=DETECT,i,j;
int midx,midy;
int stangle=45,endangle=50;
int radius=50;
initgraph(&gd,&gm,"C:\\TC\\BGI");

line(200,150,350,150);
line(140,200,200,150);
line(140,330,140,200);
line(250,200,140,200);
line(200,150,250,200);
circle(196,180,15);
setfillstyle(2,14);
floodfill(196,180,15);
setfillstyle(1,2);
line(350,150,400,200);
floodfill(210,180,15);
line(400,200,400,330);
line(140,330,400,330);
line(250,200,250,330);
line(250,200,400,200);
setfillstyle(5,7);
floodfill(260,180,15);
line(170,260,170,330);
line(170,260,210,260);
setfillstyle(10,9);
floodfill(180,250,15);
line(210,260,210,330);
setfillstyle(9,9);
floodfill(210,250,15);
line(290,110,290,150);
line(310,110,310,150);
ellipse(300,110,0,360,10,3);
setfillstyle(6,8);
floodfill(300,120,15);
line(300,250,350,250);
line(300,280,350,280);
line(300,250,350,280);
line(300,280,300,250);
line(350,280,350,250);
setfillstyle(9,9);
floodfill(252,300,15);
setfillstyle(8,9);
floodfill(342,270,15);
setcolor(3);
arc(30,300,stangle,endangle,radius);
setcolor(7);
line(5,330,600,330);
circle(30,280,20);
circle(40,280,3);
line(30,300,11,345);
line(30,300,56,342);
arc(30,300,250,300,50);
line(30,330,70,275);
line(30,350,25,400);
line(30,350,10,400);
setcolor(4);
char data1[]="A girl getting out to see the Moon";
outtextxy(150,405,data1);


getch();
closegraph();
return 0;
}