#include <iostream>

using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age; //ָ�뵽���Բ�����.��ȡֵ
    }
    int age;
    Person & add_age(Person & p1)
    {
       this->age += p1.age;
       return *this; //����ֵ������ÿ������캯�������Ժ�������Ҫ��������
    }
};

void test01()
{
    Person p(10);
    Person p1(20);
    p.add_age(p1).add_age(p1);
    cout<<p.age<<endl;
}

int main()
{
    test01();
    return 0;
}
