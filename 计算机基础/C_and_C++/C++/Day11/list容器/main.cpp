#include <iostream>
#include <list>
using namespace std;

void printList(list<int>&L)
{
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
    {
        cout<<*it<<" ";
    }
}

void test01()
{
    list<int>L(10,10); // 10��10
    list<int>L2(L.begin(),L.end());

    //����
    L2.push_back(200);
    //push_front

    //ɾ��
    //pop_front()
    //pop_back()

    //L2.insert(L2.begin(),100);

    //remove(elem) //ɾ��ĳһ��ֵ

    //L.reverse()
    //L.sort()

    printList(L);
    cout<<endl;
    printList(L2);
}

int main()
{
    test01();
    return 0;
}
