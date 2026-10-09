#include<stdio.h>
#define MAX_STACK_SIZE 5
int stack[MAX_STACK_SIZE];
int top=-1;
void push(int item)
{
    if(top==MAX_STACK_SIZE -1)
    {
        printf("Stack is full:");
        //exit(0);
    }
    else
    {
        stack[++top]=item;
    }
}
int main()
{
    int i;
    push(1);
    push(2);
    printf("The stack elements are:");
    for(i=0;i<=top;i++)
    {
        printf("\t%d",stack[i]);
    }
    return 0;

    
}