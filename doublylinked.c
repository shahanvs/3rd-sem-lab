#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;
void insertion(int);
void display_forward();
void display_backward();

void main(){
    int choice=0,n;
    while (choice!=4)
    {
        printf("DOUBLY LINKED LIST\n");
        printf("1. CREATE LIST\n2. DISPLAY IN FORWARD ORDER\n3. DISPLAY IN BACKWARD ORDER\n4. EXIT\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("\nENTER THE NUMBER OF ELEMENTS : ");
            scanf("%d",&n);
            insertion(n);
            break;

        case 2:
            display_forward();
            break;  
        
        case 3:
            display_backward();
            break;

        case 4: 
            exit(0);
            break;

        default:
        printf("\nPLEASE ENTER A VALIED CHOICE \n");
            break;
        }
    }
    getch();
}

void insertion(int n){
    head=NULL;
    struct node *ptr,*temp;
    int item ,i;
    for (i=0;i<n;i++)
    {
       ptr=(struct node*)malloc(sizeof(struct node));
       if (ptr==NULL)
       {
            printf("\nOVERFLOW\n");
       }
       else{
        printf("\nENTER VALUE %d : ",i+1);
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL){
            ptr->next=NULL;
            ptr->prev=NULL;
            head=ptr;
        }
        else{
            temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL; 
        }
       }
    }
    printf("\nLINKED LIST CREATED\n");
}

void display_forward(){
    struct node *ptr;
    printf("\nELEMENTS IN THE LINKED LIST (FORWARD)\n");
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void display_backward(){
    struct node *ptr,*last;
    printf("\nELEMENTS IN THE LINKED LIST (BACKWARD)\n");
    ptr=head;
    while(ptr!=NULL){
        last=ptr;
        ptr=ptr->next;
        }
        while (last!=NULL)
        {
            printf("%d\n",last->data);
            last=last->prev;
        }
    }
