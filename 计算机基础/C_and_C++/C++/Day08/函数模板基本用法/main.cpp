#include <iostream>

using namespace std;

//template <typename T> // �ȼ���template <class T>
template <class T>
void mySwap(T & a,T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void test01()
{
    //1���Զ������Ƶ�
    int a = 10;
    int b = 20;
    mySwap(a,b);

    //2����ʾָ������
    //mySwap<int>(a,b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main()
{
    test01();
    return 0;
}
