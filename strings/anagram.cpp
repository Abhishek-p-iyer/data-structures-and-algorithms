#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[]="medical";
    char B[]="decimal";
    int H[26]={0};
    for(int i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }
    for(int i=0;B[i]!='\0';i++)
    {
        H[A[i-97]]-=1;
        if(H[A[i]-97]<0)
            printf("Not anagram");
            break;
    }



}
