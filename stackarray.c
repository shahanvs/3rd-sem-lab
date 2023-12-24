#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\nENTER THE SIZE OF STACK : ");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\nENTER THE CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nEXITING...");
                break;
            }
            default:
            {
                printf ("\nPLEASE ENTER A VALID CHOICE(1/2/3/4)");
            }            
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK IS OVERFLOW!!");
    }
    else
    {
        printf("\nENTER A VALUE TO BE PUSHED : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nSTACK IS UNDERFLOW!!");
    }
    else
    {
        printf("\nTHE POPPED ELEMENT IS : %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nTHE ELEMENTS IN STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\nENTER NEXT CHOICE");
    }
    else
    {
        printf("\nTHE STACK IS EMPTY");
    }
}