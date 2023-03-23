#include<iostream>
#include"fib.h"
using namespace std;

int main()
{
    int n=0;
    int i=1;
    cout <<"your number?"<<endl;
    cin>>n;
    while((n--)>0)
    {
        cout <<fib(i)<<" ";
        i++;
    }
}
