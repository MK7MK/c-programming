//BINARY SEARCH USING WHILE LOOP---!
#include<stdio.h>
#include<string.h>
int main()
{
printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
int n;
printf("enter the size of array:\n");
scanf("%d",&n);
int a[n],i,j,swap,mid,key,l;
printf("enter the elements of array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
         swap=a[j];
         a[j]=a[j+1];
         a[j+1]=swap;
        }
    }
}
printf("\n");

for(i=0;i<=n;i++)
{
    printf("%d\n",a[i]);
}

//
mid=n/2;
printf("\nenter the key you want to search:\n");
scanf("%d",&key);
l=0;
while(l<n)
{
    if(key<a[mid])
    {
        for(i=0;i<mid;i++)
        {
            while(key==a[i])
            {
                printf("\nthe value of key is at location: a[%d]\n",i);
                break;
            }
        }
    }
    else if(key>a[mid])
    {
       for(i=mid;i<n;i++)
        {
            while(key==a[i])
            {
                printf("\nthe value of key is at location: a[%d]\n",i);
                break;
            }
        }
    }
    else if(key==a[mid])
    {
        printf("\nthe value of key is at location: a[%d]\n",mid);
        break;
    }
    else
    {
        printf("\nthe key you are searching is not available\n");
        break;
    }
    break;
}
return 0;
}
