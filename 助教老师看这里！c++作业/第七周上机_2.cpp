#include<iostream>
using namespace std;

int convert(int temp);
class Number
{
    public:
    
    Number(int n):dec(n)
    {
        bin=convert(dec);
    }

    void getdec()
    {
        cout<<dec<<endl;
    }

    void getbin()
    {
        cout<<bin<<endl;
    }
    private:
    int dec;
    int bin;
};

int convert(int temp)
{   
    int out=0;
    int ten=1;
    while(temp)
    {
        out += temp%8*ten;
        ten *= 10;
        temp /=8;
    }
    return out;
}

void print(int n)
{
    Number p(n);
    p.getbin();
}

int main()
{
    int n;
    cin >> n;
    print(n);
}
