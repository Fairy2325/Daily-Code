#include<iostream>
using namespace std;

int main()
{
    int count=0;
    for(char ch;ch=getchar();)
    {
        if(ch==' ')
        {
            cout<<count<<' ';
            count=0;
        }
        if(ch=='.')
        {
            cout<<count<<' ';
            break;
        }
        if(ch!=' ')
        {
            count++;
        }
    }
}