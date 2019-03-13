#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, back = -1;
int main()
{
    deQueue();

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    display();
    deQueue();
    display();

    return 0;

}

void enQueue(int value){
    if(back == SIZE-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
        back++;
        items[back] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %d", items[front]);
        front++;
        if(front > back)
            front = back = -1;
    }
}

void display(){
    if(back == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=back; i++)
            printf("%d\t",items[i]);
    }
}
