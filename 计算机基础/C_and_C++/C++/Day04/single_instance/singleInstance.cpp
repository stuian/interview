#include <iostream>

using namespace std;

// ����ģʽ��Ϊ�˴�����Ķ��󣬲��ұ�ֻ֤��һ�������Ķ���ʵ��
class ChairMan
{
public:
    static ChairMan* getInstance() // ��̬��Ա����
    {
        return singleMan;
    }

private:
    ChairMan()
    {

    }
    ChairMan(const ChairMan & c)
    {

    }
    // ���������������ʼ��
    static ChairMan * singleMan; //����Ҫͨ�������ȡ������ͨ��������ȡ(˽�л���Ҳ���ܻ�ȡ��)
};

ChairMan * ChairMan::singleMan = new ChairMan;

void test01()
{
    // ������ù��캯��
    //ChairMan c1;
    //ChairMan * c2 = new ChairMan;

//    ChairMan * cm1 = ChairMan::singleMan;
//    ChairMan * cm2 = ChairMan::singleMan;

//    ChairMan::singleMan = NULL;

    ChairMan* c1 = ChairMan::getInstance();
    ChairMan* c2 = ChairMan::getInstance();
    if (c1==c2)
    {
        cout<<"ֻ��һ��������ϯ��"<<endl;
    }
    else
    {
        cout<<"���ֶ��������ϯ��"<<endl;
    }

    //�������촴���¶���
    ChairMan * c3 = new ChairMan(*c2);
    if (c3==c2)
    {
        cout<<"ֻ��һ��������ϯ��"<<endl;
    }
    else
    {
        cout<<"���ֶ��������ϯ��"<<endl;
    }

}

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
