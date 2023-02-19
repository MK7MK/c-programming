//COUNTING THE POSITIVE AND NEGATIVE AND ZERO'S IN A LIST--!
#include<stdio.h>
#include<string.h>
int main()
{
printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
int a[20],i,pos=0,neg=0,zero=0;
printf("enter the 20 elements to check\n");
for(i=0;i<20;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{
    if(a[i]>0)
    {
        pos+=1;
    }
    else if(a[i]<0)
    {
        neg+=1;
    }
    else{
        zero+=1;
    }
}
printf("number of positive elements is: %d\n",pos);
printf("number of negative elements is: %d\n",neg);
printf("number of zero elements is: %d\n",zero);
}
