#include<stdio.h>
int main()
{
int i,j,a[5],sum=0;
printf("enter the 5 integers  to add\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}

for(i=0;i<5;i++,sum+=a[i-1]);
printf("the sum is : %d",sum);
}
