#include <iostream>
#include <string>

using namespace std;

class Building
{
public:
    friend void visit_room(Building & b);
    Building()
    {
        this->sitting_room = "����";
        this->bedroom = "����";
    }
    string sitting_room;
private:
    string bedroom;
};

//��Ԫ������ȫ�ֺ���
void visit_room(Building & b)
{
    cout<<"�������ڷ������"<<b.bedroom<<endl;
}

int main()
{
    Building b1;
    visit_room(b1);
    return 0;
}
