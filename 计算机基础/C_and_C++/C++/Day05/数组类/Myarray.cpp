#include "Myarray.h"

MyArray::MyArray()
{
    this->capacity_ = 100;
    this->m_size = 0;
    this->pAddress = new int[this->capacity_];
}

MyArray::MyArray(int capacity)
{
    cout<<"�вι������"<<endl;
    this->capacity_ = capacity;
    this->m_size = 0;
    this->pAddress = new int[this->capacity_];
}

MyArray::MyArray(const MyArray& array)
{
    cout<<"�����������"<<endl;
    this->pAddress = new int[array.capacity_];
    this->m_size = array.m_size;
    this->capacity_ = array.capacity_;

    //����ֵ
    for(int i=0;i<array.m_size;i++)
    {
        this->pAddress[i] = array.pAddress[i];
    }

}

void MyArray::push_Back(int val)
{
    this->pAddress[this->m_size] = val;
    this->m_size ++;
}

int MyArray::getData(int index)
{
    return this->pAddress[index];
}

void MyArray::setData(int index,int val)
{
    this->pAddress[index]=val;
}

int MyArray::getSize()
{
    return this->m_size;
}

int MyArray::getCapacity()
{
    return this->capacity_;
}

MyArray::~MyArray()
{
    cout<<"��������"<<endl;
    if (this->pAddress!=NULL)
    {
        delete [] this->pAddress;
        this->pAddress = NULL; //��ֹҰָ��
    }
}
