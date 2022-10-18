#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[] = "Python";
    char t;
    int c = 0;
    for(int j=0;A[j]!='\0';j++)
    {
        c++;
    }
    printf("%d",c);
    c=c-1;

    for(int i=0,c;i<c;i++,c--)
    {
        t = A[i];
        A[i]=A[c];
        A[c]=t;
    }
    printf("%s",A);


}
