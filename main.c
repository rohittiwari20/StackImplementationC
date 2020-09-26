#include <stdio.h>
#include <stdlib.h>
#define Max 10
int count=0;
struct stack
{
int top;
int items[Max];
};
/*To push elements in the stack */
void push(struct stack *s,int newitem)
{
    if(s->top==Max-1)
    {
        printf("Stack is full.");
    }
    else
    {
        s->top++;
        s->items[s->top]=newitem;
    }
    count++;
}
/*To remove(pOp) elements from the stack*/
void pop(struct stack *s)
{
    if(s->top==-1)
    {
        printf("Stack is Empty.");
    }
    else
    {
        printf("Item popped=%d",s->items[s->top]);
        s->top--;
    }
    printf("\n");
    count--;
}
/*to print the stack*/
void printStack(struct stack *s)
{
    for(int i=0;i<count;i++)
    {
        printf("%d->",s->items[i]);
    }
    printf("\n");
}
int main()
{
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    //creating empty stack
    s->top=-1;
    push(s,1);
    push(s,2);
    printStack(s);
    pop(s);
    printStack(s);
    return 0;
}
