#include<stdio.h>

void main()
{
int n,d=0,rev=0;
printd("enter a number\n");
scanf("%d",&n);
int x=n;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(x==rev)
{
printf("fibonacci\n");
else
printf("not fibonacci\n);
}
}
