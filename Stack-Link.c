#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*top=NULL;
void push();
int pop();
int peek();
void display();
int isempty();
int main()
{
    int data,choice;
    while(1)
     {
     printf("\nPress 1 to push.");
     printf("\nPress 2 to pop.");
     printf("\nPress 3 to peek.");
     printf("\nPress 4 to display.");
     printf("\nPress 5 to exit.");
     printf("\nEnter your choice: ");
     scanf("%d",&choice);
         switch(choice){
         case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            push(data);
            break ;
         case 2:
            printf("\nThe top element is: %d\n",pop());
            break;
         case 3:
             printf("\nThe top element is: %d\n",peek());
             break;
         case 4:
            display();
            break ;
         case 5:
            exit(1);
            break;
         default:
            printf("\nInvalid choice!\n");
            break;
         }
     }
     return 0;
 }
 void push(int data)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n Stack overflow");
    return;
    }
    temp->data=data;
    temp->link=top;
    top=temp;
    return;
}
int pop()
{
    struct node*temp;
    int a;
    if(isempty())
    {
        printf("\n Stack underflow.");
        return 0;
    }
    temp=top;
    top=temp->link;
    a=temp->data;
    free(temp);
    return a;
}
int peek()
{
    if(isempty())
    {
        printf("\n Stack underflow.");
        return 0;
    }
    return top->data;
}
int isempty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void display()
{
    struct node*temp;
    temp=top;
     if(isempty())
    {
        printf("\n Stack is empty.");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return;
}
