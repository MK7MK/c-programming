#include<stdio.h>
int main()
{
int m;
int x1,x2,x3;
printf("enter the values of x1,x2,x3:");
scanf("%d%d%d",&x1,&x2,&x3);
m=(x1||x2)&&(~x1||~x2)&&(x1||x3);
if(m==1)
{
printf("satisfy");
}
else
{
printf("not satisfy");
}
}
