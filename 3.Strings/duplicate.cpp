#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[]="finding";
    int B[26],i;
    for(i=0;A[i]!='\0';i++)
    {
        B[A[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(B[i]>1)
            printf("%c",i+97);
            printf("%d",B[i]);
    }
}
