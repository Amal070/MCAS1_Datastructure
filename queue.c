#include <stdio.h>
void enqueue();
void dequeue();
void peek();
int isfull();
int isempty();
int queue[100],maxsize,front=-1,rear=-1;
void main()
{
int choice,item;
printf("Enter the size of queue:");
scanf("%d",&maxsize);
while(1)
{
printf("\n--- Queue Operations Menu ---\n");
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Peek\n");
printf("4.Check isfull\n");
printf("5.Check isempty");
printf("6.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the element


