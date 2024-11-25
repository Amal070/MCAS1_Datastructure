#include <stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,n,m;
printf("Enter Elemnts to 1st\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter Elemnts to 2nd\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("1st Matrix\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
}
printf("2nd Matrix\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Matrix after addition\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("Matrix after subtraction\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
}
for (i=0; i<3; i++) 
{
for (j=0; j<3; j++) 
{
c[i][j] = 0; 
for (k = 0; k < 3; k++) {
c[i][j] += a[i][k] * b[k][j]; 
}
}
}
printf("Matrix after Multipliaction\n");
for(i=0;i<3;i++)
{

for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

