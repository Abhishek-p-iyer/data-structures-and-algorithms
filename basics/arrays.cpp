#include<iostream> 
#include<stdio.h>

using namespace std; 
 int main()
 { 
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;  
    int B[10] = {1,2,3,4,5};
    cout<<B[5]<<endl;
    cout<<B[6]<<endl;
    cout<<sizeof(A)<<endl;  //size of int is 4 - Hence we have 5*4 = 20 
    cout<<A[1]<<endl;
    for(int x:A)
    {
       cout<<x<<endl;
    }

    return 0;
 }
