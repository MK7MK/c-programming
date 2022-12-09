#include<stdio.h>
int main()
{
int n,i,s=0,temp=1,next;

printf("enter n:\n");
scanf("%d",&n);
printf("\n%d \n%d",s,temp);
for(i=2;i<n;++i)
{
next=s+temp;
printf("\n%d",next);
s=temp;
temp=next;
}
return 0;
}
