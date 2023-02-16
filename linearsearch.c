#include<stdio.h>
void main()
{
int a[100],i,n,key;
printf("enter the no of elements:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++);
scanf("%d",&a[i]);
printf("enter key value:");
scanf("%d",&key);
for(i=0;i<n;i++)
if(key==a[i])
{
printf("item found at location %d:",i+1);
break;
}
if(i>n)
printf("item does not exist");
}
