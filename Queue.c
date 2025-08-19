#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node *front, *rear;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (!temp) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Enqueue function
void enqueue(struct Queue* q, int data) {
    struct Node* temp = newNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    printf("%d enqueued to queue.\n", data);
}

// Dequeue function
int dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    struct Node* temp = q->front;
    int val = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) // if queue becomes empty
        q->rear = NULL;

    free(temp);
    return val;
}

// Display function
void display(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!\n");
        return;
    }
    struct Node* temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function with menu
int main() {
    struct Queue* q = createQueue();
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(q, value);
                break;
            case 2:
                value = dequeue(q);
                if (value != -1)
                    printf("Dequeued: %d\n", value);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
