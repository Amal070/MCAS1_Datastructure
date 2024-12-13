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


