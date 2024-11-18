#include <stdio.h>
void main()
{
int a[5],b[5],c[10],n,m,i,size,k,j;
printf("Enter the limit of 1st array: ");
scanf("%d",&n);
printf("Enter the limit of 2nd array: ");
scanf("%d",&m);
printf("Enter elements to 1st array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter elements to 2nd array :");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("The 1st array elements are: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nThe 2nd array elements are: ");
for(i=0;i<m;i++)
{
printf("%d\t",b[i]);
}
size=n+m;
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[i+n]=b[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(c[i]>c[j])
{
k=c[i];
c[i]=c[j];
c[j]=k;
}
}
}
printf("\nThe merged array is: ");
for(i=0;i<size;i++)
{
printf("%d\t",c[i]);
}
}
