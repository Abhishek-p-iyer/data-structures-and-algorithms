#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data  = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last-> next = t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void RecDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        RecDisplay(p->next);
        printf("%d ",p->data);
        
    }
}
int count(struct Node *p)
{
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;

}

int sum(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int Max(struct Node *p)
{
    int max = -32768;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

struct Node * LSearch(struct Node *p, int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
struct Node *RLSearch(struct Node *p,int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RLSearch(p->next,key);
}
void Insert(struct Node *p,int index,int x )
{

    struct Node *t;

    if(index>0 || index>count(p))
        return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;

    if(index == 0)
    {
        t->next=first;
        first=t;
    }
    else 
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }

}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p= p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else 
        {
           t->next=q->next;
           q->next=t; 
        }
    }
}

int isSorted(struct Node *p)
{
    int x=INT_MIN;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else 
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }

    }
}
void Reversal(struct Node *p)
{
    int *A,i=0;
    struct Node *q;
    A=(int *)malloc(sizeof(int)*count(p));
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Reverse3(struct Node *q ,struct Node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next=q;
    }
    else 
        first=q;
}

int isLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while (p && q && p!=q);

    if(p==q)
        return true;
    else 
        return false;
    
}
  
int main()
{
    int A[] = {10,20,30,40,50};
    create(A,5);
    //Display(first);
    //RecDisplay(first);
    //printf("%d ",count(first));
    //printf("%d ",sum(first));
    //printf("%d ",Max(first));

    /*
    struct Node *temp;
    temp = LSearch(first,10); 
    if(temp)
        printf("Key is found %d\n", temp->data);\
    else
        printf("Key is not found \n");
    Display(first); 
    */
    //Insert(first,0,10);
    
    /*
    Display(first);
    SortedInsert(first,35);
    printf("\n\n");
    Display(first);
    */

   //printf("%d\n",isSorted(first));
   //RemoveDuplicate(first);
   //Display(first);
   //Reverse3(NULL,first);
   //Display(first);
   struct Node *t1,*t2;
   t1=first->next->next;
   t2=first->next->next->next->next;
   t2->next=t1;

   printf("%d\n",isLoop(first));




    return 0;
}

