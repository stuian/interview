#include <iostream>
using namespace std;
#include <functional>

int main()
{
    negate<int>n; //ȡ���º���
    cout<<n(10)<<endl;
    plus<int> p;
    cout<<p(1,1)<<endl;
    //greater
    return 0;
}
