#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char A[]="How are you";
    int vcount=0;
    int ccount=0;
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
            vcount++;
        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
            ccount++;
    }
    printf("The number of vowels %d and the number of consonants %d", vcount,ccount);
    
}
