#include<iostream>
#include<stdio.h>
using namespace std;

int valid(char *name)
{
    int i;
    for(i=0;i!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<90) && !(name[i]>=97 && name[i]<=122) && !(name[i])>=48 && name[i]<=57)
            return 0;
    }
    return 1;
}

int main()
{
    char *name = "Anil?321";
    if(valid(name))
        printf("Valid String");
    else 
        printf("Invalid string");
}
