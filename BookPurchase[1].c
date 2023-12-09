#include<stdio.h>
void main()
{
int n,m;
printf("Enter the number of books");
scanf("%d",&n);
printf("Enter the prices of the books");
int p[n],i,j,flag=0;
for(i=0;i<n;i++)
scanf("%d",&p[i]);
printf("How much money Mr.Nivas Have?");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((p[i]+p[j])==m)
{
flag=1;
printf("Pair found :[%d,%d]",p[i],p[j]);
break;
}
}
if(flag==1)
break;
}
if(flag==0)
printf("no matches found");
}