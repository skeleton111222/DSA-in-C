#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue_arr[max];
int front=-1,rear = -1;
void inqueue(int data);
int dequeue();
int peek();
void display();
int isempty();
int isfull();
int main()
 {
     int choice,data;

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
 void inqueue(int data)
{
    if(isfull())
    {
        printf("\nQueue is full.");
    return ;
    }
        rear=rear+1;
        queue_arr[rear]=data;
        if(front==-1)
        {
            front=0;
        }

return;
}
 int dequeue()
{
    int item;
    if(isempty())
    {
        printf("\nQueue is empty.");
return 0;
    }
    item=queue_arr[front];
        front=front+1;
    return  item;
}
 int peek()
{
    if(isempty())
    {
        printf("\nQueue is empty.");
    return 0;
    }
    return queue_arr[front];
return;
}
int isempty()
{
    if(front == -1||front==rear+1)
    {
    return 1;
    }
    return 0;
}
int isfull()
{
    if(front-1==max||rear==max)
    {
        return 1;
    }
    return 0;
}
void display()
{
    int i;
    if(isempty())
    {
        printf("\nQueue is empty.");
    return;
    }
    printf("\nElements of Queue:");
    for(int i=front;i<=rear;i++)
    {
    printf("%d ",queue_arr[i]);
    }
    return;
}
