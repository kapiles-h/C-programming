#include<stdio.h>
void main()
{
int i,j,temp,digit,count,pr,sum=0;
for(i=100; i<10000; i++)
{
for(temp=i,count=0,sum=0;temp;temp/=10)
count++;
for(temp=i;temp;temp/=10)
{
for(j=0,pr=1;j<count;j++)
pr*=(temp%10);
sum+=pr;
}
if(sum==i)
printf("%d ",i);
}
printf("\n");
}
