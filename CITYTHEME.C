#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"");
char a[5];
for(i=10; i>=0;i--)
{
settextstyle(BOLD_FONT,0,4);

outtextxy(200,150,"CITY LIFE");
sprintf(a,"%d",i);
setcolor(RED);
outtextxy(300,300,a);
delay(300);
setcolor(WHITE);
cleardevice();
}
for(i=0; i<100; i++)
{
cleardevice();
line(10,400,620,400);

//Traffic Light
line(550,400,550,300);
rectangle(500,150,600,300);
circle(550,175,20);
circle(550,225,20);
circle(550,275,20);
if(i<30)
{
setfillstyle(SOLID_FILL,RED);
floodfill(550,175,WHITE);
}
else if(i<45)
{
setfillstyle(SOLID_FILL,YELLOW);
floodfill(550,225,WHITE);
}
else if(i<90)
{
setfillstyle(SOLID_FILL,GREEN);
floodfill(550,275,WHITE);
}
else
{
setfillstyle(SOLID_FILL,RED);
floodfill(550,175,WHITE);
}

//car
//bktier
circle(80+3*i,380,20);
circle(80+3*i,380,15);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(81+3*i,380,WHITE);

//fttier
circle(160+3*i,380,20);
circle(160+3*i,380,15);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(161+3*i,380,WHITE);

//arc
arc(80+3*i,380,0,180,25);
arc(160+3*i,380,0,180,25);

line(55+3*i,380,45+3*i,380);
line(185+3*i,380,210+3*i,380);
line(105+3*i,380,135+3*i,380);
line(45+3*i,350,45+3*i,380);
line(210+3*i,350,210+3*i,380);
line(210+3*i,350,160+3*i,320);
line(45+3*i,350,60+3*i,320);
line(60+3*i,320,160+3*i,320);
setfillstyle(SOLID_FILL,RED);
floodfill(61+3*i,321,WHITE);

//moon
circle(50,50,15);
setfillstyle(SOLID_FILL,WHITE);
floodfill(51,50,WHITE);

//building
setfillstyle(SLASH_FILL,CYAN);
rectangle(10,100,90,280);
bar(20,120,50,140);
bar(20,160,50,180);
bar(20,200,50,220);
bar(20,240,50,260);

rectangle(90,120,200,280);
bar(100,140,130,160);
bar(100,180,130,200);
bar(100,220,130,240);
bar(150,140,180,240);

rectangle(200,110,300,280);
bar(220,120,240,260);
bar(260,120,280,140);
bar(260,160,280,180);
bar(260,200,280,220);
bar(260,240,280,260);

rectangle(300,120,360,280);
rectangle(360,100,420,280);
rectangle(420,80,500,280);
bar(440,100,460,120);
bar(440,140,460,160);
bar(440,180,460,200);
bar(440,220,460,240);

rectangle(300,120,360,280);
rectangle(360,100,420,280);
rectangle(420,80,500,280);

//man
circle(580,340,15);
line(580,355,580,385);
line(580,365,560,375);
line(580,365,600,375);
line(580,385,600,400);
line(580,385,560,400);
//cap of man
line(565,325,595,325);
arc(580,325,0,180,15) ;
setfillstyle(SOLID_FILL,BLUE);
floodfill(580,318,WHITE);
delay(150);
setcolor(WHITE);
}
getch();
}