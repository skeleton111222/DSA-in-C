#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*front=NULL;
struct node*rear=NULL;
void inqueue();
int dequeue();
int peek();
void display();
int isempty();
int main()
{
 int data,choice;
    while(1)
     {
     printf("\nPress 1 to inqueue.");
     printf("\nPress 2 to dequeue.");
     printf("\nPress 3 to peek.");
     printf("\nPress 4 to display.");
     printf("\nPress 5 to exit.");
     printf("\nEnter your choice: ");
     scanf("%d",&choice);
         switch(choice){
         case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            inqueue(data);
            break ;
         case 2:
            printf("\nThe top element is: %d\n",dequeue());
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
void inqueue(data)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    if(rear!=NULL){
        rear->link=temp;
    }
    rear=temp;
    if(isempty())
    {
        front=rear;
    }

    return;
}
 int dequeue()
{
    struct node*temp;
    int a;
    if(isempty())
    {
        printf("\n Queue is empty.");
        return 0;
    }
    temp=front;
    front=temp->link;
    a=temp->data;
    free(temp);
    return a;
}
int peek()
{
    if(isempty())
    {
        printf("\n Queue is empty.");
        return 0;
    }
    return front->data;
}
int isempty()
{
    if(front==NULL)
    {
        return 1;
    }
    return 0;
}
void display()
{
    struct node*temp;
    temp=front;
     if(isempty())
    {
        printf("\n Queue is empty.");
        return;
    }
    printf("\n Elements of Queue: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return;
}
