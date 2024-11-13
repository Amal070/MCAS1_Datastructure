#include <stdio.h>
#include <stdlib.h>
void main()
{
int a[10],i,n,pos;
printf("Enter the limit of array: ");
scanf("%d",&n);
printf("Enter the array elements :");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("The array elements are: ");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
printf("\nEnter the position to be delete: ");
scanf("%d",&pos);
if(pos==0 || pos>=n)
{
printf("Invalid Position");
exit(0);
}
else
{
for(i=pos;i<=n;i++)
{
a[i]=a[i+1];
}
}

printf("\n converted array: ");
for(i=1;i<=n-1;i++)
{
printf("%d\t",a[i]);
}
}


