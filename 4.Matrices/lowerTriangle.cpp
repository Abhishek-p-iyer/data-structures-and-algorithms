#include<iostream>
#include<stdio.h>
using namespace std;

class LowerTri 
{
    private:
    int n;
    int *A;
    public:
    LowerTri()
    {
        n=2;
        A= new int[2];
    }
    LowerTri(int n)
    {
        this->n=n;
        A = new int[n];
    }
    ~LowerTri()
    {
        delete []A;
    }

    void Set(int i,int j, int x);
    int Get(int i, int j);
    void Display();
};

void LowerTri::Set(int i, int j, int x)
{
    if(i<=j)
        A[i*(i-1)/2+(j-1)]=x;
}
int LowerTri::Get(int i, int j)
{
    if(i>=j)
        return A[i*(i-1)/2+(j-1)];
    else 
        return 0;
}

void LowerTri::Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
                cout<<A[i*(i-1)/2+(j-1)]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    LowerTri lm(3);
    lm.Set(1,1,1);
    lm.Set(1,2,1); 
    lm.Set(1,3,1);  
    lm.Set(2,2,1);
    lm.Set(2,3,1);
    lm.Set(3,3,1);

    lm.Display();
    



}
