#include <iostream>
#include <queue>
using namespace std;

void test01()
{
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);

    while(!q.empty())
    {
        cout<<"��ͷ��"<<q.front()<<endl;
        cout<<"��β��"<<q.back()<<endl;
        q.pop();
    }
}

int main()
{
    test01();
    return 0;
}
