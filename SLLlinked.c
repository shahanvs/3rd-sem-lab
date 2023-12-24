#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int value;
    struct node *next;   
    };

    typedef struct node snode;

snode *newnode,*ptr;
snode *first=NULL, *last = NULL;
snode *createnode(int);
void insertnode(int);
void display();


void main()
{
    int ch=0,n;
    while (ch!=3)
    {
        printf("\nLINKED LIST OPERATIONS \n ");
        printf("\n1. CREATE LIST\n2. DISPLAY LIST\n3. EXIT\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            printf("\nENTER THE NUMBER OF ELEMENTS : ");
            scanf("%d",&n);
            insertnode(n);
            break;
            case 2:
            printf("\nELEMENTS IN THE LIST ARE  \n");
            display();
            break;
            case 3 :
            printf("\nEXITING....\n");
            break;
            default:
            printf("\nINVALIED CHOICE\n");
            break;
            }
        }
        getch();
    }



    snode *createnode(int val){
        newnode = (snode*)malloc(sizeof(snode));
        newnode -> value =val ;
        newnode -> next=NULL;
        return newnode;
    }


    void insertnode(int n){
        first=last=NULL;
        int val,i;
        for(i=0;i<n;i++){
            printf("\nENTER THE VALUE FOR THE NODE %d : ",i+1);
            scanf("%d",&val);
            newnode=createnode(val);
                if (first==last && last==NULL)
                {
                    first=last=newnode;
                    first->next=NULL;
                    last->next=NULL;
                }
                else{
                    last->next=newnode;
                    last=newnode;
                    last->next=NULL;
                } 
            }
            printf("\nLINKED LIST CREATED \n");
        }
        void display(){
            if(first==NULL){
                printf("\nNO NODE IN THE LIST TO DISPLAY \n");
            }
            else{
                for(ptr=first;ptr!=NULL;ptr=ptr->next){
                    printf("%d\n",ptr->value);
                }
            }
        }



