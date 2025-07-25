#include <stdio.h>
void enqueue(int queue[],int size,int el,int front,int rear){
    if(rear!=size-1){
        if(front==-1&&rear==-1){
            front=0;
        }
        queue[++rear]=el;
    }
    else{
        printf("Queue is full!!!");
    }
}
int dequeue(int queue[],int size,int front,int rear){
    int item;
    if(front==-1){
        printf("Queue is empty");
    }
    else{
        item=queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
    return item;
}
int front(int queue[],int front){
    if(front==-1){
        printf("The queue is empty");
        return -1;
    }
    return queue[front];
}
void isFull(int queue[],int rear,int size){
    if(rear==size-1){
        printf("The queue is full");
    }
    else{
        printf("The queue is not full");
    }
}
int main()
{
    int queue[100];
    int size;
    int front=-1,rear=-1;
    printf("Enter the size of the queue :");
    scanf("%d",&size);

    return 0;
}