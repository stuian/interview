#include <iostream>

using namespace std;

//class New
//{
//public:
//    void header()
//    {
//        cout<<"����ͷ��"<<endl;
//    }
//    void footer()
//    {
//        cout<<"�����ײ�"<<endl;
//    }
//    void left()
//    {
//        cout<<"����б�"<<endl;
//    }
//    void content()
//    {
//        cout<<"��������"<<endl;
//    }
//
//};
//
//class Amusement
//{
//public:
//    void header()
//    {
//        cout<<"����ͷ��"<<endl;
//    }
//    void footer()
//    {
//        cout<<"�����ײ�"<<endl;
//    }
//    void left()
//    {
//        cout<<"����б�"<<endl;
//    }
//    void content()
//    {
//        cout<<"��������"<<endl;
//    }
//
//};

void test01()
{
    New new1;
    new1.header();

    Amusement a;
    a.header();
}

//�̳�д��
//���ظ�������д��һ������
class BasePage
{
    void header()
    {
        cout<<"����ͷ��"<<endl;
    }
    void footer()
    {
        cout<<"�����ײ�"<<endl;
    }
    void left()
    {
        cout<<"����б�"<<endl;
    }
};

class News: public BasePage
{
    void content()
    {
        cout<<"���Ų���"<<endl;
    }
};

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
