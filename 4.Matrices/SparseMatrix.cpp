#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Element
{
    int i;
    int j;
    int x;

};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;

};

void create(struct Sparse *s)
{
    printf("Enter dim");
    scanf("%d%d",&s->m,&s->n);
    printf("Number of non-zero elements");
    scanf("%d",&s->num);
    s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
    printf("Enter the number of non-zero elements");
    for(int i=0;i<s->num;i++)
    {
        scanf("%d%d%d",s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
}

void display(struct Sparse s)
{
    int i,j,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
                printf("%d ",s.ele[k++].x);
            else
                printf("0 ");

        } 
        printf("\n");   
            
    }
    
}

int main()
{
    struct Sparse s;
    create(&s);
    display(s);
}
