#include <iostream>
#include "Myarray.h"

using namespace std;

void test01()
{
    //������������
    MyArray* array = new MyArray(30);
    MyArray array2 = MyArray(*array);

    //�����ÿ�������
//    MyArray* array2 = new MyArray(*array);
//    MyArray array3 = *array;

//    MyArray * array2 = array;
//    if(array2==*array)
//    {
//        cout<<"���"<<endl;
//    }

    for(int i=0;i<10;i++)
    {
        array2.push_Back(i);
    }

    // cout<<i<<endl; // i was not declared

    for(int i=0;i<10;i++)
    {
        cout<< array2.getData(i)<<endl;
    }

    cout<<array2.getSize()<<endl;
    cout<<array2.getCapacity()<<endl;


    delete array;

}

int main()
{
    test01();
    return 0;
}
