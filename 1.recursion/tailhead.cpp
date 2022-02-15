#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int n)
{
    if(n>0)
    {
        //fun(n-1); //head recursion
        printf("%d",n);
        fun(n-1); //tail recursion 
    }
}

int main()
{
    int x=3;
    fun(x);
    return 0;
}