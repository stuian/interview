#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
        //cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
    }
    if(v.empty())
    {
        cout<<"����Ϊ��"<<endl;
    }
    else
    {
        cout<<"������Ϊ��"<<endl;
    }

    //v.resize(10,-1);

    //����swap
    //vector<int>(v).swap(v) //�

    //v.reserve(100000) //Ԥ�����ռ�
}

void printVector(vector<int>&v)
{
    for(vector<int>::iterator vi=v.begin();vi!=v.end();vi++)
    {
        cout<<*vi<<" ";
    }
    cout<<endl;
}

void test02()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(11);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.insert(v.begin(),2,100);
    printVector(v);
    v.pop_back();
    printVector(v);
}

void test03()
{
    //�������
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    for(vector<int>::reverse_iterator it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;

    //vector���������������
//    vector<int>::iterator ivBegin = v.begin;
//    ivBegin = ivBegin + 1; //�����������������������
}

int main()
{
//    test01();
//    test02();
    test03();
    return 0;
}
