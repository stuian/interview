#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    //ofstream ofs("./test.txt",ios::out | ios::trunc);
    //д�ļ�
    ofstream ofs;
    ofs.open("./test.txt",ios::out|ios::trunc);
    if(!ofs.is_open())
    {
        cout<<"��ʧ��"<<endl;
    }
    ofs<<"������abc"<<endl;
    ofs<<"���䣺15"<<endl;


}

void test02()
{
    ifstream ifs;
    ifs.open("./test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"��ʧ��"<<endl;
    }
    //��һ�ַ���
//    char buf[1024];
//    while (ifs>>buf) //���ж�ȡ
//    {
//        cout<<buf<<endl;
//    }

    //�ڶ��ַ�ʽ
//    char buf2[1024];
//    while(!ifs.eof()) // �Ƿ�����ļ�β
//    {
//        ifs.getline(buf2,sizeof(buf2));
//        cout<<buf2<<endl;
//    }

    //�������ַ���ȡ
    char c;
    while ((c=ifs.get())!=EOF)
    {
        cout<<c;
    }
    ifs.close();
}

int main()
{
    //test01();
    test02();
    return 0;
}
