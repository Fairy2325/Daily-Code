#include<iostream>
using namespace std;

class time
{
private:
    int BJT;
    int UTC;
public:
    time(int temp);
    ~time();
};

time::time(int temp)
{
    BJT=temp;
    if(BJT>=800)
    UTC=BJT-800;
    if(BJT<800)
    UTC=BJT+2400-800;

    cout<<UTC;

    

}

time::~time()
{
}

int main()
{
    int temp;
    cin>>temp;
    time convert(temp);
}
