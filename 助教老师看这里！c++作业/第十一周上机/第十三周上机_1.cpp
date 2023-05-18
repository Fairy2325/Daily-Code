#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    string s2;
    int p=0;
    int s=0;
    getline(cin,s2);
    getline(cin,s1);
    p=int (s2.find(s1));
    s2.erase(0,p+1);
    s+=p;
    if(p!=-1)
    cout<<s<<' ';
    while(p!=-1)
    {
        p=int (s2.find(s1));
        s2.erase(0,p+1);
        s+=p+1;
        if(p!=-1)
        cout<<s<<' ';
    }
}