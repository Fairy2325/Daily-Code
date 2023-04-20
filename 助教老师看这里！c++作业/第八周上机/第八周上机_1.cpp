#include<iostream>
using namespace std;

bool is_huiwen(int temp);

class huiwenshu
{
private:
    int nearest;
    int loop_time;

public:
    huiwenshu(int m,int k);
    ~huiwenshu();
    int get_nearest()
    {
        return nearest;
    }
};

huiwenshu::huiwenshu(int m,int k)
{
    loop_time=k;
    for(int i=m;;i++)
    {
        if(loop_time)
        {
            if(is_huiwen(i))
            {
                nearest=i;
                cout<<nearest<<" ";
                loop_time--;
            }
        }
        else
        {
            break;
        }
    }
}

huiwenshu::~huiwenshu()
{
}

bool is_huiwen(int temp)
{
    int temp0=temp;
    int temp1=0;
    while(temp)
    {
        temp1*=10;
        temp1+=temp%10;
        temp/=10;
    }
    if(temp0==temp1)
    return true;
    else
    return false;
}

    

int main()
{
    int m,k;
    cin>>m;
    cin>>k;
    huiwenshu test(m,k);

}