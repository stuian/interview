#include <iostream>

using namespace std;

class Animals
{
public:
    Animals()
    {
        cout<<"���캯��"<<endl;
    }
    ~Animals()
    {
        cout<<"��������"<<endl;
    }
    virtual void speak()
    {
        cout<<"������˵����"<<endl;
    }
};

class Cat: public Animals
{
public:
    Cat()
    {
        cout<<"���캯��"<<endl;
    }
    ~Cat()
    {
        cout<<"��������"<<endl;
    }
    virtual void speak()
    {
        cout<<"Сè��˵����"<<endl;
    }
};

void doSpeak(Animals & a)
{
    a.speak();
}

int main()
{
    Cat c;
    doSpeak(c);
    //cout << "Hello world!" << endl;
    return 0;
}
