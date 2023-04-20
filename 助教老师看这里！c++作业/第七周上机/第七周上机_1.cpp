#include<iostream>
using namespace std;

class yangtri
{
public:
    yangtri(int n):line(n)      //创建对象时为杨辉三角赋值
    {
        for(int i=0;i<line;i++)
        {
            numtree[i][0]=1;
            for(int j=1;j<i;j++)
            {   
                if(i>0)
                {
                    numtree[i][j]=numtree[i-1][j-1]+numtree[i-1][j];
                }
            }
            numtree[i][i]=1;
        }
    }

    void getyangtri()       //打印杨辉三角
    {
        for(int i=0;i<line;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<numtree[i][j]<<' ';
            }
            cout<<endl;
        }
    }



private:
    int numtree[15][15];    //杨辉三角二维数组
    int line;               //行数

};

void print(int n)
{
    yangtri p(n);
    p.getyangtri();
}

int main(void)
{
    int m;
    cin>>m;
    while(m--)  //循环m次
    {
        int n;
        cin>>n;
        print(n);
    }
}