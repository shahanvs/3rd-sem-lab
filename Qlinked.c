#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

void insert();
void dequeue();
void display();
void exit();

void main(){
    int choice;
    printf("\nQUEUE OPERATION USING LINKED LIST \n");
    printf("1. INSERT AN ELEMENT\n2. DELETE AN ELEMENT\n3. DISPLAY THE QUEUE\n4. EXIT");
    while (choice!=4)
    {
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default: printf("\nENTER A VALIED CHOICE !!\n");
            break;
        }
    } 
}

void insert(){
    struct node *ptr;
    int item;
    ptr=(struct node*)
    malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\nOVERFLOW!!\n");
        return;
    }
    else{
        printf("\nENTER A VALUE : ");
        scanf("%d",&item);
        ptr -> data=item;
        if(front==NULL){
            front=ptr;
            rear=ptr;
            front ->next=NULL;
            rear ->next=NULL;
        }
        else{
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}

void dequeue(){
    struct node *ptr;
    if(front==NULL){
        printf("\nUNDERFLOW !!\n");
        return;
    }
    else{
        ptr=front;
        front=front->next;
        free(ptr);
    }
}

void display(){
    struct node *ptr;
    ptr=front;
    if (front==NULL){
        printf("\nEMPTY QUEUE\n");
    }
    else{
        printf("\nELEMENTS IN THE QUEUE ARE : \n");
        while (ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        } 
    }
}