#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,j,s,x;
printf("enter the value i,j");
scanf("%d%d",&i,&j);
x=i*1100+j*11;
s=sqrt(x);
if((s*s)==x)
printf("the number is perfect square");
else 
printf("the number is not perfect square");
}
