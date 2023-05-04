#include<iostream>
using namespace std;

int main()
{
    char ch;
    for(int i=0;i<7;i++)
    {
        cin>>ch;
        if(ch>='A'&&ch<='C')
        cout<<2;
        if(ch>='D'&&ch<='F')
        cout<<3;
        if(ch>='G'&&ch<='I')
        cout<<4;
        if(ch>='J'&&ch<='L')
        cout<<5;
        if(ch>='M'&&ch<='O')
        cout<<6;
        if(ch>='P'&&ch<='S')
        cout<<7;
        if(ch>='T'&&ch<='V')
        cout<<8;
        if(ch>='W'&&ch<='Z')
        cout<<9;
    }
}