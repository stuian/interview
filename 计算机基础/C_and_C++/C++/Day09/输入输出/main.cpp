#include <iostream>

using namespace std;

/*
cin.get();
cin.get();
cin.getline();
cin.ignore();
cin.peak();
cin.putback();

*/

void test01()
{
    int num;
    cin>>num;
    cout << num << endl;
}

void test02()
{
    int num;
    cout<<"������һ��1��10�����֣�"<<endl;

    while(true)
    {
        cin>>num;
        if(num>0 &&num<=10)
        {
            cout<<"���������Ϊ��"<<num<<endl;
            break;
        }
        cout<<"�Բ�������������"<<endl;
        cin.clear(); // ���ñ�־λ
        cin.sync(); // ��ջ�����

        cout<<"��־λ"<<cin.fail()<<endl;
    }
}

int main()
{
    //test01();
    test02();
    return 0;
}
