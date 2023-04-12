#include<iostream>
using namespace std;

class yangtri
{
public:
    yangtri(int n):line(n)      //��������ʱΪ������Ǹ�ֵ
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

    void getyangtri()       //��ӡ�������
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
    int numtree[15][15];    //������Ƕ�ά����
    int line;               //����

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
    while(m--)  //ѭ��m��
    {
        int n;
        cin>>n;
        print(n);
    }
}