#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
    char x; //allocates 4 bytes but uses only 1 byte
};

int main()
{
    struct Rectangle r1={10,5};
    cout<<sizeof(r1)<<endl;
    printf("%d", r1.length*r1.breadth);
    r1.length = 15;
    r1.breadth = 10;
    printf("%d",r1.length*r1.breadth);

}