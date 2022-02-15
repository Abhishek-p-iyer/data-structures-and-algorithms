#include<iostream>
#include<stdio.h>
using namespace std;

template<class T>
class Arthimetic
{
    private:
    T a;
    T b;

    public:
    Arthimetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arthimetic<T>::Arthimetic(T a, T b)
{
    this ->a=a;
    this ->b=b;
}
template<class T>
T Arthimetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arthimetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

int main()
{
    Arthimetic<int> ar(10,5);

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;

    return 0;
}
