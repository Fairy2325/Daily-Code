#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(1<=n&&n<=10)
    cout<<"Children";
    if(11<=n&&n<=20)
    cout<<"Teenagers";
    if(21<=n&&n<=40)
    cout<<"Youth";
    if(41<=n&&n<=50)
    cout<<"middle-aged";
    if(51<=n&&n<=80)
    cout<<"Elderly";
    if(81<=n&&n<=100)
    cout<<"Old man";
}