#include<stdio.h>
#include<graphics.h>
#include<math.h>
void disp();
float x,y;
int xc,yc;
void main()
{
int gd=DETECT,gm;
int a,b;
float p1,p2;
char buff[50];
printf("enter the xc,yc cordinates\n");
scanf("%d %d",&xc,&yc);
printf("\n enter the values\n");
scanf("%d %d",&a,&b);
initgraph(&gd,&gm,"");
sprintf(buff,"(%d %d)",xc,yc);
outtextxy(xc,yc,buff);
x=0;y=b;
disp();
p1=(b*b)-(a*a*b)+(a*a)/4;
while((2.0*b*b*x)<=(2.0*a*a*y))
{
x++;
if(p1<=0)
p1=p1+(2.0*b*b*x)+(b*b);
else
{
y--;
p1=p1+(2.0*b*b*x)+(b*b)-(2.0*a*a*y);
}
disp();
x=-x;
disp();
x=-x;
}
x=a;
y=0;
disp();
p2=(a*a)+2.0*(b*b*a)+(b*b)/4;
while((2.0*b*b*x)>(2.0*a*a*y))
{
y++;
if(p2>0)
p2=p2+(a*a)-(2.0*a*a*y);
else
{
x--;
p2=p2+(2.0*b*b*x)-(2.0*a*a*y)+(a*a);
}
disp();
y=-y;
disp();
y=-y;
}
getch();
closegraph();
}
void disp()
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc+x,yc-y,WHITE);
}
