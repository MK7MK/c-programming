#include<stdio.h>
int *sum(int *s,int *t,int *u,int n)
{
    for(int i=0;i<n;i++)
    {
        u[i]=s[i]+t[i];
    }
    return u;
}
int main()
{
    printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
    int arr1[50],arr2[50],arr3[50],n;
    int *m;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements of the array2:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    m=sum(arr1,arr2,arr3,n);
    printf("The elements of sum in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",m[i]);
    }
    return 0;
}
