#include <stdio.h>
void main()
{
int i,n,a[10],key;
printf("enter the limit of array:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are: ");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter the item to be search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("Item is founded on %dth position",i);
break;
}
if(i==n-1)
{
printf("Item is not founded");
}
}
}



