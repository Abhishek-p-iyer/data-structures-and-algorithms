#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main()
{
    //pointer in structures 
    //struct Rectangle r={5,10};
    //cout<<r.length<<endl;   //when we have normal variable use dot operator
    
    //struct Rectangle *p=&r;
    //cout<<p->length<<endl;
    //cout<<p->breadth<<endl; //when we have a pointer use arrow 


    //how to create an object of structure in heap
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //C code 
    //p=new Rectangle; C++ code 
    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}