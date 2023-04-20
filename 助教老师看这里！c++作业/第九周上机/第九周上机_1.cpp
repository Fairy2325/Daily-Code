#include<iostream>
using namespace std;

class problem
{
private:
    int sum;
public:
    problem(int num);
    ~problem();
};

problem::problem(int num)
{
    sum=num/100+num%100/10+num%10;
    cout<<sum;
}

problem::~problem()
{
}

int main()
{
    int num;
    cin>> num;
    problem temp(num);
}