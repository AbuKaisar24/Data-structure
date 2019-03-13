#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
  int capacity;
  int size;
  int *elements;
}stack;
stack* createstack(int maxelements)
{
    stack *s;
    s=(stack*)malloc(sizeof(stack));
    s->elements=(int *)malloc(sizeof(int)*maxelements);
    s->size=0;
    s->capacity=maxelements;

    return s;
}
void pop(stack *s)
{
    if(s->size==0)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        s->size--;
    }

    return;
}
int  top(stack *s)
{
    if(s->size==0)
    {
        printf("stack is empty");
        return;
    }
    return s->elements[s->size-1];
}
void push(stack *s,int element)
{
    if(s->size=s->capacity)
    {
        printf("stack is full");
    }
    else
    {
        s->elements[s->size++]=element;
    }
    return;
}
int main()
{
  stack *s=createstack(5);
  push(s,10);
  push(s,20);
  push(s,-1);
  push(s,12);
  printf("Top element:%d\n",top(s));
  pop(s);
  printf("Top element:%d\n",top(s));
  pop(s);
  printf("Top element:%d\n",top(s));
  pop(s);
  printf("Top element:%d\n",top(s));
  pop(s);



}
