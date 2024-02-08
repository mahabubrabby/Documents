#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

int ourQueue[CAPACITY] , totalitem = 0;
int front = 0, rear = -1, totaliteam = 0;
bool isFull(){
     if (totalitem == CAPACITY){
        return true;
     }
     return false;

}
bool isEmpty(){
    if (totalitem == 0){
        return true;
    }
    return false;

}
void enqueue(int item){
     if(isFull()){
        printf("sorry, the Queue is full.\n");
        return;
     }
     rear = (rear +1)%CAPACITY;
     ourQueue[rear] = item;
     totalitem++;
}
int dequeue(){
    if(isEmpty()){
        printf("sorry,the Queue is empty.\n");
    }
    int frontitem = ourQueue[front];
    ourQueue[frontitem] = -1;
    front = (front + 1) % CAPACITY;
    totalitem--;
    return frontitem;
}
void printqueue(){
     int i;
     printf("Queue: ");
     for(i=0; i<CAPACITY; i++){
        printf("%d",ourQueue[i]);
     }
     printf("\n");
}

int main (){
    printf("\n********\nLet's implement our Queue.\n\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printqueue();
    enqueue(50);
    printqueue();
    enqueue(60);
    printf("Deque: %d\n", dequeue());
    printqueue();

    return 0;
}
