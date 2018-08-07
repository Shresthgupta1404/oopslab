#include <stdio.h>
int main()
{
int i,j,n;
scanf("%d",&i);
scanf("%d",&j);
n=i+(j-(i%j));
printf("%d",n);
}
