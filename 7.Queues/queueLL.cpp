#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Queue is Full");
    else
    {
        t->data=x;
        t->next=NULL;
        if(front == NULL)
            front=rear=t;
        else 
        {
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue()
{
    int x=1;
    struct Node * t;

    if(front == NULL)
        printf("Queue is empty");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    Display();
}
