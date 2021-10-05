#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>&s)
{
    for(set<int>::iterator si=s.begin();si!=s.end();si++)
    {
        cout<<*si<<" ";
    }
    cout<<endl;
}

void test01()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.insert(7);

    printSet(s);
    s.erase(3);
}

//�º���
class compare
{
public:
    bool operator()(int a,int b)
    {
        if(a>b)
        {
            return true;
        }
        return false;

    }
};

void test02()
{
    set<int,compare> s;
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.insert(7);

    for(set<int,compare>::iterator si=s.begin();si!=s.end();si++)
    {
        cout<<*si<<" ";
    }
    cout<<endl;

    //int pos = s.find(3);//����ֵΪ��������û�ҵ�����end()������
    //int num = s.count(3);

    s.lower_bound(3); //���ش��ڵ���3�ĵ�һ��Ԫ��
    s.upper_bound(3); //���ش���3�ĵ�һ��Ԫ��

//    s1.equal_range(3); //����lower_bound��upper_bound
}

int main()
{
    test02();
    return 0;
}
