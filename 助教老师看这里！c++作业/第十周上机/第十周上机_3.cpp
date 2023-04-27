#include<iostream>
using namespace std;

void div(int a,int b,int time)
{
    if(time>0&&a!=0)
    {
        cout<<a/b;
        div(a%b*10,b,time-1);
    }
}


int main()
{
    int time=200;
    int a,b;
    cin>>a;
    getchar();
    cin>>b;
    cout<<"0.";
    div(a*10,b,time);
    cout<<'\n';
}