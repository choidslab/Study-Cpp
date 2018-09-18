#include <iostream>
using namespace std;

class SoBase
{
private:
    int baseNum;
public:
    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase()" << baseNum << endl;
    }
    ~SoBase()
    {
        cout << "~SoBase()" << baseNum << endl;
    }
};

class SoDerived : public SoBase
{
private:
    int deriveNum;
public:
    SoDerived(int n) : SoBase(n), deriveNum(n)
    {
        cout << "SoDerive()" << deriveNum << endl;
    }
    ~SoDerived()
    {
        cout << "~SoDerive()" << deriveNum << endl;
    }
};

int main()
{
    // 스택에 생성되는 객체
    // 1. Super class의 생성자 호출
    // 2. Sub class의 생성자 호출
    // 3. Sub classs의 소멸자 호출
    // 4. Super class의 소멸자 호출
    SoDerived drv1(15);
    SoDerived drv2(27);

    return 0;
}

