#include <iostream>

using namespace std;

class Animals
{
public:
    int age;
};

class Sheep: virtual public Animals
{

};

class Tuo:virtual public Animals
{

};

class SheepTuo: public Sheep,public Tuo
{

};

void test01()
{
    SheepTuo st;
    st.age = 100;
    cout<<st.age<<endl;

    //�ҵ�sheep��ƫ��������
    //cout<<*(int *)((int *)*(int *)&st + 1)<<endl;

    //�ҵ�tuo��ƫ��������
    //cout<<*(int *)((int *)*((int *)&st+1) + 1)<<endl;
}

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
