#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[]="MADAM";
    char B[6];
    int c;
    for(int i=0;A[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
    for(int i=0,c;i<c;i++,c--)
    {
        if(A[i]!=B[c])
            printf("Not a palindrome");
    }
    printf("Palindrome");
}
