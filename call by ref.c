#include<stdio.h>
int main(){
int a,b,sum;
scanf("%d %d",&a,&b);
sum=add(&a,&b);
printf("%d %d",a,b);
printf("%d",sum);
}
int add(int *x,int *y)
{
printf("numbers inside function %d %d",*x,*y);
*x+=10;
*y+=10;
return(*x+*y);
}
