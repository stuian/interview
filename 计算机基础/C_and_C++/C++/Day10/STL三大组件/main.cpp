#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//�����Զ�����������
class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};


//��ָͨ��Ҳ����һ�ֵ�����


//����
void myPrint(int a)
{
    cout<<a<<endl;
}

void test01()
{
    //��������
    vector<int> v; // ģ�����д��
    //�������м�����
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    //��һ�ֱ���
//    while(itBegin!=itEnd)
//    {
//        cout<<*itBegin<<endl;
//        itBegin++;
//    }

    //�ڶ��ֱ���
//    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//    {
//        cout<<*it<<endl;
//
//    }

    //�����ֱ����������㷨
    for_each(v.begin(),v.end(),myPrint); //myPrintֻ����һ���������Ҳ������ͺ������ڴ洢���ݵ�����һ��

}

//����Զ������Ͷ���
void test02()
{
    vector<Person> v;
    Person p1("��ͷ����",10);
    Person p2("Сͷ�ְ�",32);
    Person p3("����������",30);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<"����: "<<(*it).m_name<<" ���䣺"<<it->m_age<<endl;
        //*it��<>������ݣ���Person
    }
}

//����Ƕ������
void test03()
{
    vector<vector<int>> v;

    vector<int>v1;
    vector<int>v2;
    vector<int>v3;

    for(int i=0;i<4;i++)
    {
        v1.push_back(i);
        v2.push_back(i+10);
        v3.push_back(i+100);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for(vector<vector<int>>::iterator vi=v.begin();vi!=v.end();vi++)
    {
        for(vector<int>::iterator vvi=(*vi).begin();vvi!=(*vi).end();vvi++)
        {
            cout<<*vvi<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    test03();
    return 0;
}
