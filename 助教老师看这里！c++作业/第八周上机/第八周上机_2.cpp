#include<iostream>
using namespace std;

class circle
{
private:
    double r;
    double c;
    double d;
    double s;
public:
    circle(int r);
    ~circle();
};

circle::circle(int r):r(r)
{
    d=2*this->r;
    cout<<"ֱ��="<<d<<endl;
    c=d*3.14;
    cout<<"�ܳ�="<<c<<endl;
    s=3.14*this->r*this->r;
    cout<<"���="<<s<<endl;
}

circle::~circle()
{
    
}

int main()
{
    int r;
    cin>>r;
    circle temp(r);
}
