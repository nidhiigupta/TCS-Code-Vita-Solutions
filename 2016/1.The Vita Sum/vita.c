#include<stdio.h>
int fact(int);
int main()
{
int n,k,sum=0,i,res;
scanf("%d%d",&n,&k);
for(i=0;i<=k;i+=2)
{
res=fact(n)/(fact(n-i)*fact(i));
sum=sum+res;
}
printf("%d",sum);
return 0;
}
int fact(int num)
{
int fact=1,i;
for(i=1;i<=num;i++)
fact=fact*i;
return fact;
}
