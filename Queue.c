#include<stdio.h>
#include<stdlib.h>
#define MAX 15

typedef struct Queue{
    int data[MAX];
    int front;
    int rear;
}queue;

int enqueue(queue* q){
    int item;
    q->rear++;
    printf("Enter a value to be enqueued");
    scanf("%d", &item);
    q->data[q->rear] = item;
    return item;
}


int dequeue(queue* q){
    int item = q->data[q->front];
    q->front++;
    return item;
}


void shift(queue* q){
    int i;
    int j = q->front;
    for(i=0; i < q->front; i++){
        q->data[i] = q->data[j];
        j++;
    }
    q->front = 0;
    q->rear = i;
}

int main(){
    queue* q = (queue*) malloc(sizeof(queue));
    q->front = q->rear = -1;
    int choice, item;
    while(1)
    {
        printf("Enter 1 to enqueue    2 to dequeue   and 0 to exit");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                    if(q->rear == (MAX -1) && q->front == 0)
                        printf("Queue is full");
                        break;
                    if(q->rear == (MAX -1))
                        shift(q);
                    if(q->front ==-1)
                        q->front++;
                    item = enqueue(q);
                    printf("Item enqueued was %d", item);
                    break;
            case 2:
                    if(q->front == -1 || q->front == MAX)
                        printf("Queue is empty");
                        break;
                        
                    if(q->rear == q->front){
                    printf("Queue is empty");
                        q->front = q->rear = -1;
                    }
                    item = dequeue(q);
                    printf("Item dequeued was %d", item);
                    break;

            case 0:
                   exit(0);
        }
    }

    return 0;
}
