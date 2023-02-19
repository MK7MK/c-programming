#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
char b[100];
char c[100];
int val=0,n,i;
char m;
printf("enter the string\n");
fgets(a,sizeof(a),stdin);
n=strlen(a);
printf("\n\noutput\n");
for(i=0;a[i]!='\0';i++)
{
//if(a[i]='')
{
val=(a[i])%29;
b[i]=((char)val);
m=b[i];
c[i]=(char)m;
}
}
for(i=0;i<n;i++)
{
printf("%c\n",b[i]);
}
for(i=0;i<n;i++)
{
printf("%c\n",c[i]);
}

return 0;
}
