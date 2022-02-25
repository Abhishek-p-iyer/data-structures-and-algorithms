#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

struct Array 
{
    int A[10];
    int length;
    int size;
};

int Binary_Search(struct Array arr,int key)
{
    int low = 0;
    int high = arr.length-1;
    while(low<=high)
    {
        int mid;
        mid = floor((low+high)/2);
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            high=mid-1;
        else 
            low = mid+1;
    }
    return -1;

}

int RBin_Search(int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid=floor((l+h)/2);
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBin_Search(a,l, mid-1, key);
        else 
            return RBin_Search(a,mid+1,h,key);

    }
    return -1;
}

void display(struct Array arr)
{
    printf("Elements of an array are \n");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct Array arr={{1,2,3,4,5,6},6,10};
    //printf("%d\n",Binary_Search(arr,6));
    printf("%d\n",RBin_Search(arr.A,0,arr.length,5));
    display(arr); 
    return 0;
}
