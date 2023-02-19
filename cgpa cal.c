#include<stdio.h>
int main()
{
char cgpa;
printf("enter the cgpa you want to check: ");
scanf("%c",&cgpa);
switch(cgpa)
{
case 'S':
        printf("90 to 100");
        break;
case 'A':
        printf("80 to 89");
        break;
case 'B':
        printf("70 to 79");
        break;
case 'C':
        printf("60 to 69");
        break;
case 'D':
        printf("50 to 60");
        break;
case 'F':
        printf("40 to 50");
        break;
case 'E':
        printf(" below 40");
        break;
}
return 0;
}
