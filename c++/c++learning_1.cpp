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
    //ȫ�ֺ�������Ԫ
    friend void goodGay(Building *building);

public:
    Building()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

//ȫ�ֺ���
void goodGay(Building *building)
{
    cout<<"ȫ�ֺ������ڷ���"<<building->m_SittingRoom<<endl;

    cout<<"ȫ�ֺ������ڷ���"<<building->m_BedRoom<<endl;
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

    void visit();//�ιۺ���


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
    m_SittingRoom="����";
    m_BedRoom="����";
}
  
GoodGay::GoodGay()
{
    //�������������
    building= new Building;
}


void GoodGay::visit()
{
    cout <<"�����ڷ���"<<building->m_SittingRoom<<endl;
    cout <<"�����ڷ���"<<building->m_BedRoom<<endl;
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

