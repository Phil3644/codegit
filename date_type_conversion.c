#include<stdio.h>

void main ()
{
int a=5;
char c='a';
float f=5.3;
double m=12.65;
double result;

printf("a+c=%d\n",a+c);
printf("a+c=%c\n",a+c);
printf("f+m=%f\n",f+m);


printf("a+m=%f\n",a+m);
printf("c+f=%f\n",f+c);


result=a+c*(f+m);
printf("double =%f\n",result);



}

