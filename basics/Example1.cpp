//moudlar programming 
#include<iostream>
#include<stdio.h>
using namespace std;

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    int p;
    p=2*(length+breadth);
    return  p;
}
int main()
{
    int length =0,breadth=0;

    cout<<"enter your length and breadth"<<endl;
    cin>>length>>breadth;

    int a = area(length,breadth);
    int peri = perimeter(length, breadth);

    return 0;
}






