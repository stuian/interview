#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string user_name;
    int age;
};

void test1()
{
    const Person p1={"abc",12}; //�����ڴ�
    //p1.user_name = "www";
    Person *p = (Person *)&p1;
    p->user_name = "jwj";
    (*p).age = 23;

    cout<<p1.user_name<<endl;
    cout<<p1.age<<endl;
}

int main()
{
    // 1���泣��;�����޸�
    const int a = 10;
    int *p = (int *)&a;
    *p = 20;
    cout<<"a:"<<a<<endl;
    cout<<"*p:"<<*p<<endl;
    // 2���Զ������
    int m = 10;
    const int b = m;
    int *q = (int *)&b;
    *q = 20;
    cout<<"b:"<<b<<endl;
    cout<<"*p:"<<*p<<endl;
    //3���Զ�����������
    test1();
    return 0;
}
