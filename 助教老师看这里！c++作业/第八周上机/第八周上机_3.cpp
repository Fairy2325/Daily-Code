#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

class grade
{
public:
    string name;
    float usual;
    float final;
    float total;
    int rank=1;
    grade();
    ~grade();
    void init(string name,float usual,float final)
    {
        this->name=name;
        this->final=final;
        this->usual=usual;

        total=usual*0.4+final*0.6;
    }
    void putout()
    {
        //cout<<name;
        printf("%s",name.c_str());
        printf(" %.2f %.2f %.2f %d\n",usual,final,total);
    }
};
grade::grade()
{

}

grade::~grade()
{
    
}

int main()
{
    string name;
    float usual;
    float final;
    grade student[30];
    int i=0;
    for(i;cin>>name>>usual>>final;i++)
    {
        student[i].init(name,usual,final);
    }
    for(int m=i-1;m>=0;m--)
    {
        for(int n=0;n<i;n++)
        {
            if(student[m].total<student[n].total)
            {
                student[m].rank++;
            }
        }
    }
    for(int x=1;x<=i;x++)
    {
        for(int y=0;y<i;y++)
        {
            if(student[y].rank==x)
            {
                student[y].putout();
            }
        }
    }

}
