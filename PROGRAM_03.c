#include<stdio.h>
void main()
{
int n,i,mid,key,left,right,a[10],temp,j;
printf("enter the array limit\n");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;++j)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("Enter the element to be search:");
scanf("%d",&key);
left=0;
right=n-1;
while(left<=right)
{
mid=(left+right)/2;
if(a[mid]==key)
{
printf("%d found at index %d\n",key,mid);
break;
}
else if(a[mid]<key)
{
left=mid+1;
}
else
{
right=mid-1;
}
}
if(left>=right)
{
printf("%d not found in the array\n",key);
}
}




