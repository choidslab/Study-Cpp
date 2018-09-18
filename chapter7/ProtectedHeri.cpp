#include <iostream>
using namespace std;

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;

    Base(): num1(1), num2(2), num3(3)
    {

    }

};

class Derived : protected Base
{

};

int main()
{
    Derived drv;
    cout << drv.num3 << endl; // compile error! protected는 상속받은 클래스 내에서만 접근 가능! 따라서, main()에서 접근 불가!

    return 0;
}