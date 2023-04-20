#include<iostream>
using namespace std;

class number
{
private:
    float average;
    float S;

public:
    number();
    ~number();
    void init(float i1,float i2,float i3,float i4,float i5,float i6)
    {
        average=(i1+i2+i3+i4+i5+i6)/6;
        S=((i1-average)*(i1-average)+
        (i2-average)*(i2-average)+
        (i3-average)*(i3-average)+
        (i4-average)*(i4-average)+
        (i5-average)*(i5-average)+
        (i6-average)*(i6-average))/6;
    }
    void putout()
    {
        cout<<average<<' '<<S;
    }
};

number::number()
{
}

number::~number()
{
}

int main()
{
    int n;
    int i1,i2,i3,i4,i5,i6;
    number arr[n];
    cin>>n;
    while(n--)
    {
        cin>>i1>>i2>>i3>>i4>>i5>>i6;
        arr[n].init(i1,i2,i3,i4,i5,i6);
        arr[n].putout();
    }
}