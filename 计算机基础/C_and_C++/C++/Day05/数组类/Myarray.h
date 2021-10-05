#ifndef MYARRAY_H_INCLUDED
#define MYARRAY_H_INCLUDED

#endif // MYARRAY_H_INCLUDED

# include <iostream>
using namespace std;

class MyArray
{
public:
    MyArray();
    MyArray(int capacity);
    MyArray(const MyArray& array);

    ~MyArray();

    //β�巨
    void push_Back(int val);

    //��ȡֵ
    int getData(int index);

    void setData(int index,int val);

    int getSize();

    int getCapacity();


private:
    int * pAddress;
    int m_size;
    int capacity_;
};
