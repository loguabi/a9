#include<stdio.h>
int main()
{
int n,m,i,j;
printf("Enter the number:");
scanf("%d",&n);
int *arr;
arr=(int *)malloc(sizeof(int)*n);
for( i=0;i<n;i++)
{
printf("arr",i);
}
scanf("Enter the number :");
scanf("%d",&m);
for( i=0;i<n;i++)
{
for( j=j+1;j<n=i;j++)
{
if(arr[i]+arr[j]==m)
{
printf("Target sum obtained :",arr[i],arr[j]);
}
}
}
printf("Target not found");
return 0;
}
