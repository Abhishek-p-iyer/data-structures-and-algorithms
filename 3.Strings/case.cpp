#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[]="WELCOME";
    for(int i=0;A[i]!='\0';i++)
    {
        A[i]=A[i]+32;
    }
    printf("%s",A);
}
