#include <stdio.h>
#define MAX 50
void insert();
void delete();
void display();
int ar[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("\n1.Insert element to queue ");
printf("\n2.Delete element from queue ");
printf("\n3.Display all elements of queue ");
printf("\n4.Exit ");
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Invalid ");
}
}
}
void insert()
{
int item;
if(rear == MAX - 1)
printf("Queue Overflow ");
else
{
if(front== - 1)
front = 0;
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
ar[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow ");
return;
}
else
{
printf("Element deleted from queue is : %d", ar[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty ");
else
{
printf("Queue is : ");
for(i = front; i <= rear; i++)
printf("%d ", ar[i]);

}
}
