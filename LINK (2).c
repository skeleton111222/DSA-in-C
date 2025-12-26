
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
struct node *addatpos(struct node *start, int data, int pos) {
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;

    if (pos == 1) {
        temp->link = start;
        start = temp;
        return start;
    }

    p = start;
    for (int i = 1; i < pos - 1 && p != NULL; i++) {
        p = p->link;
    }

    if (p == NULL) {
        printf("\nPosition does not exist.\n");
        return start;
    } else {
        temp->link = p->link;
        p->link = temp;
        return start;
    }
}
void count(struct node *start) {
    struct node *temp = start;
    int a = 0;
    while (temp != NULL) {
        a++;
        temp = temp->link;
    }
   printf("\n Number of elements present in the list is:%d",a);
}
void search(struct node *start, int data) {
    struct node *p = start;
    int a = 1;

    while (p != NULL) {
        if (p->data == data) {
            printf("Data %d found at position %d, at address: %p\n", data, a, (void *)p);
            return;
        }
        p = p->link;
        a++;
    }
    printf("Data %d not found in the list.\n", data);
}
struct node *del(struct node *start, int data) {
    if (start == NULL) {
        printf("List is Empty!.\n");
        return start;
    }

    struct node *temp, *p;
    if (start->data == data) {
        temp = start;
        start = start->link;
        free(temp);
        return start;
    }

    p = start;
    while (p->link != NULL) {
        if (p->link->data == data) {
            temp = p->link;
            p->link = temp->link;
            free(temp);
            return start;
        }
        p = p->link;
    }
    printf("Given element is not present in list.\n");
    return start;
}
struct node *delpos(struct node *start, int pos){
    struct node *temp, *p;
    p = start;
    if (start == NULL)
    {
        printf("List is Empty!");
        return start;
    }
    if (pos == 1)
    {
        temp = start;
        start = start->link;
        free(temp);
        return start;
    }
    for (int i = 1; i < pos - 1 && p != NULL; i++)
    {
        p = p->link;
    }
    if (p == NULL)
    {
        printf("\nPosition does not exist...");
        return start;
    }
    temp = p->link;
    p->link = temp->link;
    free(temp);
    return start;
}
void main()
{
    struct node*start=NULL;
    int choice,data,pos;
    while(1)
        {
            printf("\n Press 1 to add an element at beginning of list.");
            printf("\n Press 2 to add an element at end of list.");
            printf("\n Press 3 to add an element at position of list.");
            printf("\n Press 4 to delete an element of list.");
	    printf("\n Press 5 to delete an element of position in list.");
	    printf("\n Press 6 to search an element.");
	    printf("\n Press 7 to count the element.");
	    printf("\n Press 8 to display element.");
            printf("\n Press 9 to exit.");
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
                printf("\n Enter an element to add at position  of list:");
                scanf("%d",&data);
                printf("\n Enter the position of list where you want to insert:");
                scanf("%d",&pos);
                start=addatpos(start,data,pos);
                break;
	   case 4:
                printf("\n Enter an element delete:");
                scanf("%d",&data);
                start=del(start,data);
                break;
	   case 5:
                printf("\n Enter the position:");
                scanf("%d",&pos);
                start=delpos(start,pos);
                break;
	   case 6:
                printf("\n Enter an element to search:");
                scanf("%d",&data);
                search(start,data);
                break;
	   case 7:
                count(start);
                break;
           case 8:
                printf("\n Element of list:");
                display(start);
                break;
            case 9:
                    exit(1);
                    break;
            default:
                printf("\n invalid choice." );
                break;
            }

        }

}