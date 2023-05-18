#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string num;
    cin>>num;
    reverse(num.begin(),num.end());
    cout<<num<<endl;
}