#include<iostream>
#define RUN_ALL 366;
#define PING_ALL 365;
using namespace std;
const int run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
const int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int calculate(int y,int m,int d);

class Date
{
    public:
    Date(int y,int m,int d):year(y),month(m),day(d)
    {
        week=calculate(year,month,day)%7+1;
    }

    void getweek()
    {
        cout<<week<<endl;
    }

    private:
    int year;
    int month;
    int day;
    int week;

};

bool is_run(int y)
{
    if((y%4==0&&y%100!=0)||(y%400==0))
    return true;
    else
    return false;
}

int calculate(int y,int m,int d)
{
    int dd=0;
    for(int dy=1900;dy<y;dy++)
    {
        dd += is_run(dy)?366:365;
    }
    for(int dm=1;dm<m;dm++)
    {
        dd += is_run?run[dm]:ping[dm];
    }
    dd += d;
    return dd-1;
}

int main()
{
    int y,m,d;
    cin>>y;
    getchar();
    cin>>m;
    getchar();
    cin>>d;
    getchar();
    Date p(y,m,d);
    p.getweek();
}