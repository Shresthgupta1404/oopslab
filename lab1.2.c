#include<stdio.h>
#include<conio.h>
main()
{
float n;
int k=0;
printf("enter the number");
scanf("%f",&n);
for(n;n>=1;k++)
{n=n/10;
}
printf("%d",k);
}
