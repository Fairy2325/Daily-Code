#include<iostream>
using namespace std;

int count=1;
int a=0;
int b=0;
int c=0;

int hanoi(char X,char Y,char Z,int n)
{
    if(n>1)
    {
        hanoi(X,Z,Y,n-1);
        printf("Step%d Move Disk%d from %c to %c\n",count++,n,X,Z);
        hanoi(Y,X,Z,n-1);
    }

    if(n==1)
    {
        printf("Step%d Move Disk1 from %c to %c\n",count++,X,Z);

    }
}

int main()
{
    int n;
    cin>>n;
    a=n;
    hanoi('A','B','C',n);
}