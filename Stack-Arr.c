#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack_arr[max];
int top = -1;
void push(int data);
int pop();
int peek();
void display();
int isempty();
int isfull();
int main()
 {
     int choice,data;

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
    if(isfull())
    {
        printf("\nStack overflow.");
    return ;
    }
        top=top+1;
        stack_arr[top]=data;
return;
}
int isfull()
{
    if(top==max-1)
    {
        return 1;
    }
    return 0;
}
int isempty()
{
    if(top == -1)
    {
    return 1;
    }
    return 0;
}
int pop()
{
    int item;
    if(isempty())
    {
        printf("\nStack underflow.");
return 0;
    }
    item=stack_arr[top];
        top=top-1;
    return  item;
}
int peek()
{
    if(isempty())
    {
        printf("\nStack is empty.");
    return 0;
    }
    return stack_arr[top];
return;
}
void display()
{
    int i;
    if(isempty())
    {
        printf("\nStack is empty.");
    return;
    }
    printf("\nElements of stack are:");
    for(int i=top;i>=0;i--)
    {
    printf("%d ",stack_arr[i]);
    }
    return;
}
