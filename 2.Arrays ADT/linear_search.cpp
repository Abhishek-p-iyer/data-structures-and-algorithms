#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void display(struct Array arr)
{
    printf("Elements are \n");
    for(int i=0; i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }

}
void swap(int *x, int *y)
{
    int temp; 
    temp = *x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr={{2,3,4,5,6},5,10};
    printf("%d\n",LinearSearch(&arr,5));
    display(arr);
}
