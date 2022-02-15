#include<iostream>
#include<stdio.h>
using namespace std;

int add(int a, int b) //call by value 
{
    int c;
    c=a+b;

    return c;
}

void swap(int *x, int *y) //call by address
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int main()
{
    int num1=10,num2=15,sum; //call by value
    sum = add(num1,num2);
    cout<<"sum is "<<sum<<endl;
    return 0;

    int num3=10,num4=15;
    swap(&num3,&num4);

    cout<<"First number"<<endl;
    cout<<"Second number"<<endl;

    return 0;

}