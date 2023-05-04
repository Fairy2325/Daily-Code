#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[100];
    int k;
    char ch;
    int i;
    for(i=0;(ch=getchar())!='\n';i++)
    {   
        if(ch>='a'&&ch<='z')
        ch+=('A'-'a');
        if(ch=='-')
        {
            i--;
            continue;
        }
        s[i]=ch;
    }
    cin>>k;
    int m=i%k;
    int n=i/k;
    for(int q=0;q<i;q++)
    {
        cout<<s[q];
        if((i-q-1)%k==0&&((i-q-1)!=0))
        cout<<'-';
    }
    
}