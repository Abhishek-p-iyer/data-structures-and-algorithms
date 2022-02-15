#include<iostream>
#include<stdio.h>
using namespace std;
//points to remember - pointers take 8 bytes and they are independent of its data type 
int main()
{
    //int A[5] = {2,4,6,8,10};
    //int *p;
    //p = A; //if we need the whole array
           //p=&A[0]; // if we need one element 

    //for(int i=0;i<5;i++)
    //cout<<p[i]<<endl;

    //accessing memory from heap using C
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0]=10;p[1]=11;p[2]=12;p[3]=13;p[4]=21;

    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    //accessing memory from heap using cpp 
    int *q;
    q = new int[5];  //whenever we are dynamically allocating memory, we must release the memory
    q[0]=10;q[1]=11;q[2]=12;q[3]=13;q[4]=21;

    for(int i=0;i<5;i++)
    cout<<q[i]<<endl;
    delete [ ] q; //releasing memory for cpp 
    free(p); //releasing memory for c
    return 0;
    
} 