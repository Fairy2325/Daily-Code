#include<iostream>
#include<string>
using namespace std;
/*
class Person 
{
public:
    Person()
    {

    }
    void showPerson() const
    {
        this ->m_B = 100;
        cout<<m_B;
    }
    int m_A;
    mutable int m_B;
};  

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    const Person p;
  //  p.m_A = 100;
    p.m_B = 100;
}

int main()
{
    test01();
} */



/* class Building
{
    //全局函数做友元
    friend void goodGay(Building *building);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

//全局函数
void goodGay(Building *building)
{
    cout<<"全局函数正在访问"<<building->m_SittingRoom<<endl;

    cout<<"全局函数正在访问"<<building->m_BedRoom<<endl;
}
void test01()
{
    Building building;
    goodGay(&building);
}

int main()
{
    test01();
}*/

class Building;

class GoodGay
{
public:

    GoodGay();

    void visit();//参观函数


    Building * building;


};

class Building
{
    friend class GoodGay;
public:
    Building();
    
public:
    string m_SittingRoom;

    private:
    string m_BedRoom;
};

Building::Building()
{
    m_SittingRoom="客厅";
    m_BedRoom="卧室";
}
  
GoodGay::GoodGay()
{
    //创建建筑物对象
    building= new Building;
}


void GoodGay::visit()
{
    cout <<"类正在访问"<<building->m_SittingRoom<<endl;
    cout <<"类正在访问"<<building->m_BedRoom<<endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
}

