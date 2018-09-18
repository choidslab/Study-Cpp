#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n)
    {
        cout << "num=" << num << ", ";
        cout << "address=" << this << endl;
    }
    void ShowSimpleData()
    {
        cout << num << endl;
    }
    SoSimple *GetThisPointer()
    {
        return this;
    }
};

int main()
{
    SoSimple sim1(100);
    // *ptr1은 SoSimple 객체의 주소를 담을 포인터 변수를 의미 함
    // sim1 객체의 주소를 저장
    SoSimple *ptr1 = sim1.GetThisPointer();
    cout << ptr1 << ", ";
//    (*ptr1).ShowSimpleData(); == ptr1->ShowSimpleData();
    ptr1->ShowSimpleData();

    SoSimple sim2(200);
    SoSimple *ptr2 = sim2.GetThisPointer();
    cout << ptr2 << ", ";
    ptr2->ShowSimpleData();

}