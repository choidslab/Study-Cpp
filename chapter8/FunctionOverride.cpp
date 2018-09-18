#include <iostream>
using namespace std;

class First
{
public:
    virtual void MyFunc()
    {
        cout << "FirstFunc" << endl;
    }
};

class Second : public First
{
public:
    virtual void MyFunc()
    {
        cout << "SecondFunc" << endl;
    }
};

class Third: public Second
{
public:
    virtual void MyFunc()
    {
        cout << "ThirdFunc" << endl;
    }
};

int main()
{
    // 객체 포인터 변수의 타입(클래스)에 관계 없이 생성된 객체의 함수를 무조건 호출
    // virtual을 선언하지 않고 함수를 오버라이드 할 경우 객체 포인터 변수의 타입에 해당하는 함수가 호출 되는 문제 발생
    Third * tptr = new Third();
    Second * sptr = tptr;
    First * fptr = sptr;

    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    delete tptr;

    return 0;
}