#include<stdio.h>
#include <stdlib.h>

struct node
{
    int i;
    struct node *ptr;
}
*top,*top1,*temp;

int first_element();
void push(int data);
void pop();
void empty();
void display();
void create();

int count = 0;

void main()
{
    int n, ch, e;

    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 5 - Exit");
    printf("\n 6 - Dipslay");
    create();

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
    {
        case 1:
            printf("Enter data : ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
    {
                e = first_element();
                printf("\n Top element : %d", e);
    }
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        default :
            printf(" invalid choice\n ");
            break;
    }
    }
    }

      void create()
   {
         top = NULL;
   }

     void push(int data)
   {
     if (top == NULL)
   {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->i = data;
    }
     else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->i = data;
        top = temp;
    }
     count++;
    }

    void display()
   {
     top1 = top;

    if (top1 == NULL)
   {
        printf("Stack is empty");
    return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->i);
        top1 = top1->ptr;
    }
    }

    void pop()
    {
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error");
    return;
    }
    else
        top1 = top1->ptr;
        printf("\n Popped value : %d", top->i);
        free(top);
        top = top1;
       count--;
   }

    int first_element()
   {
    return(top->i);
   }



