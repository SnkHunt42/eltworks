#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data;
    int priority;
} QueueItem;

typedef struct {
    QueueItem items[MAX_SIZE];
    int front, rear;
} PriorityQueue;

void initializeQueue(PriorityQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(PriorityQueue *q) {
    return (q->rear == MAX_SIZE - 1);
}

int isEmpty(PriorityQueue *q) {
    return (q->front == -1 || q->front > q->rear);
}

void enqueue(PriorityQueue *q, int data, int priority) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }

    QueueItem newItem;
    newItem.data = data;
    newItem.priority = priority;

    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
        q->items[q->rear] = newItem;
    } else {
        int i;
        for (i = q->rear; i >= q->front && q->items[i].priority < newItem.priority; i--) {
            q->items[i + 1] = q->items[i];
        }
        q->items[i + 1] = newItem;
        q->rear++;
    }
}

QueueItem dequeue(PriorityQueue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        QueueItem emptyItem = {-1, -1}; // return invalid item
        return emptyItem;
    }

    QueueItem item = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front++;
    }
    return item;
}

// Example testing program
int main() {
    PriorityQueue q;
    initializeQueue(&q);

    // Enqueue some items
    enqueue(&q, 10, 2);
    enqueue(&q, 20, 1);
    enqueue(&q, 30, 3);

    // Dequeue items
    QueueItem item = dequeue(&q);
    printf("Dequeued: data=%d priority=%d\n", item.data, item.priority);

    item = dequeue(&q);
    printf("Dequeued: data=%d priority=%d\n", item.data, item.priority);

    item = dequeue(&q);
    printf("Dequeued: data=%d priority=%d\n", item.data, item.priority);

    // Trying to dequeue when queue is empty
    item = dequeue(&q);
    printf("Dequeued: data=%d priority=%d\n", item.data, item.priority);

    return 0;
}
