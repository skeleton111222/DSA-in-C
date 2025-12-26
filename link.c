
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};

struct node*addatbeg(struct node*start,int data)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=start;
    start=temp;
    return start;
};

struct node*addatend(struct node*start,int data)
{
    struct node*temp,*p;
    p=start;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
     p->link=temp;
    return start;
};

void display(struct node*start)
{
struct node*p;
    if(start==NULL)
    {
        printf("Linkedlist is empty");
        return;
    }
    p=start;
    while(p!=NULL)
          {
	      printf("%d ",p->data);
                p=p->link;

          }
}

void main()
{
    struct node*start=NULL;
    int choice,data;
    while(1)
        {
            printf("\n Press 1 to add an element at beginning of list.");
            printf("\n Press 2 to add an element at end of list.");
            printf("\n Press 3 to display element.");
            printf("\n Press 4 to exit.");
            printf("\n Enter your choice:- ");
            scanf("%d",&choice);
            switch(choice){
            case 1:
                printf("\n Enter an element to add at beginning of list:");
                scanf("%d",&data);
                start=addatbeg(start,data);
                break;
            case 2:
                printf("\n Enter an element to add at end of list:");
                scanf("%d",&data);
                start=addatend(start,data);
                break;
            case 3:
                printf("\n Element of list:");
                display(start);
                break;
                case 4:
                    exit(1);
                    break;
            default:
                printf("\n invalid choice." );
                break;
            }

        }

}