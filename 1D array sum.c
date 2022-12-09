#include<stdio.h>
int addtogetans(int g,int v,int n,int m)
{
 int c[10][10],i=0,j=0;
 int (*s)[10],(*t)[10],(*temp1)[10];
 s=g;
 t=v;
 int temp=0;
 temp1=c;
 for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            c[i][j]=( *( *(s + i) + j) + *( *(t + i) + j) );
        }
    }
    return temp1;
}
int main()
{
    printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
    int a[10][10],b[10][10],c[10][10],ansa[10][10],temp=0;
    int i, j,n=0,m=0;
    int (*s)[10],(*t)[10],(*w)[10];
    s=a;
    t=b;
 printf("The number of rows you want to enter in array :");
 scanf("%d",&n);
 printf("The number of column you want to enter in array :");
 scanf("%d",&m);
 printf("enter the elements for the array 1 :");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",( *(s + i) + j));
  }
 }
 printf("enter the elements for the array 2 :");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",( *(t+ i) + j));
  }
 }
    w=addtogetans(a,b,n,m);

    printf("THE FINAL ARRAY\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d\t",*( *(w + i) + j));
        }
        printf("\n");
    }
    return 0;
}
