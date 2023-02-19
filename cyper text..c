//SIPHERTEXT PROGRAM--!
#include<stdio.h>
#include<string.h>
int main()
{
printf("NAME: MONESH KUMAR MK\nREGISTER NUMBER: 19MIC0072\n");
char a[100];
int b[100];
int temp,n,i;
printf("enter the string\n");
fgets(a,sizeof(a),stdin);
n=strlen(a);
printf("\n\noutput\n");
for(i=0;a[i]!='\0';i++)
{
//if(a[i]='')
{
temp=(int)a[i];
temp=temp%29+65;
b[i]=((char)temp);
}
}
for(i=0;i<n;i++)
{
printf("%c\n",b[i]);
}
return 0;
}
