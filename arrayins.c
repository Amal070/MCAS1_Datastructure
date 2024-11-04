#include <stdio.h>
void main()
{
int a[10],i,n,in,pos;
printf("Enter the limit of array: ");
scanf("%d",&n);
printf("enter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be inserted: ");
scanf("%d",&in);
printf("Enter the position to insert: ");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
printf("Array after insertion: ");
for(i=0;i<=n;i++)
{
printf("%d\t",a[i]);
}
}
