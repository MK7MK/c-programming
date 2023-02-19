//COUNTING THE VOWELS
#include<stdio.h>
#include<string.h>
int main()
{
printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
char a[50],i,count=0;
printf("\nenter the string\n");
gets(a);
for(i=0;i<50;i++)
{
if(a[i]!='\0')
{
if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
{
count+=1;
}
}
}
printf("\nThe number of vowels in given string is %d\n",count);
}
