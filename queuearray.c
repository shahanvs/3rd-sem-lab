#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int queue[20],front=-1,rear=-1,size;

void main(){
    int choice;
    printf("\nENTER THE SIZE OF QUEUE : ");
    scanf("%d",&size);
    printf("QUEUE OPERATION USING ARRAY \n");
    printf("1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n");
    while (choice!=4)
    {
        printf("ENTER THE CHOICE : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:{
            insert();
            break;
            }
        case 2:{
            delete();
            break;
            }
        case 3:{
            display();
            break;
            }
        case 4:{
            exit(0);
            break;
            }
        default:{
            printf("\nPLEASE ENTER A VALID CHOICE (1/2/3/4)\n");
            }
            break;
        }
    }
    getch();
}

void insert(){
    int item;
    printf("\nENTER THE ELEMENT : ");
    scanf("%d",&item);
    if (rear==size-1)
    {
        printf("\nOVERFLOW!!\n");
        return;
    }
    if (front==-1 && rear==-1)
    {
        front=0,rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=item;
    printf("\nVALUES INSERTED\n");
}

void delete(){
    int item;
    if (front==-1 || front >rear )
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        item=queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
        printf("\nVALUE DELETED\n");
    }  
}

void display(){
    int i;
    if (rear==-1)
    {
        printf("EMPTY QUEUE\n");
    }
    else{
        printf("ELEMENTS IN THE QUEUE ARE :\n");
        for ( i = front; i <= rear; i++)
        {
            printf("%d\n",queue[i]);
        } 
    }
}


