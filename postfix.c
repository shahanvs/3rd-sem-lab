#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct Stack
{
    int top;
    unsigned size;
    int *arr;
};

struct Stack* createStack(unsigned size){
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    if(!stack)
    return NULL;
    stack->top=-1;
    stack->size=size;
    stack->arr=(int*)malloc(stack->size* sizeof(int));
    if(! stack->arr)
    return NULL;
    return stack;
}

int isEmpty(struct Stack* stack){
    return stack->top==-1;
    }

char peek(struct Stack *stack){
    return stack->arr[stack->top];
}


char pop(struct Stack* stack){
    if(!isEmpty(stack))
    return stack->arr[stack->top--];
    return '$';
}

void push(struct Stack* stack, char op){
    stack -> arr[++stack->top]=op; 
}

int evaluatepostfix(char* exp){
    struct Stack *stack=createStack(strlen(exp));
    int i;
    if (!stack)
    return -1;
    for(i=0;exp[i];++i){
        if(isdigit (exp[i]))
        push(stack,exp[i]-'0');
        else{
            int value1=pop(stack);
            int value2=pop(stack);
            switch (exp[i])
            {
            case '+':
                push(stack,value2+value1);
                break;

            case '-':
                push(stack,value2-value1);
                break;

            case '*':
                push(stack,value2*value1);
                break;

            case '/':
                push(stack,value2/value1);
                break;
            }
        }
    }
    return pop(stack);
}

void main(){
    char exp[20];
    printf("ENTER POSTFIX EXPRESSION : ");
    gets(exp);
    printf("POST EVALUATION %d",evaluatepostfix(exp));
    getch();

}