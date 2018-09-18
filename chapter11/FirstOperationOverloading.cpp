#include <iostream>
using namespace std;

class First
{
private:
    int num1, num2;
public:
    First(int n1=0, int n2=0): num1(n1), num2(n2)
    {

    }
    void ShowData()
    {
        cout << num1 << ", " << num2 << endl;
    }
};

class Second
{
private:
    int num3, num4;
public:
    Second(int n3 = 0, int n4 = 0): num3(n3), num4(n4)
    {

    }
    void ShowData()
    {
        cout << num3 << ", " << num4 << endl;
    }
    Second& operator=(const Second& ref)
    {
        cout << "Seoncd& operator=()" << endl;
        num3 = ref.num3;
        num4 = ref.num4;
        return *this;
    }
};

int main()
{
    First fsrc(111, 222);
    First fcpy;
    Second ssrc(333, 444);
    Second scpy;

    fcpy = fsrc;
    scpy = ssrc; // 대입 연산자 오버로딩 호출

    fcpy.ShowData(); // 111, 222
    scpy.ShowData(); // 333, 444

    First fob1, fob2;
    Second sob1, sob2;
    fob1 = fob2 = fsrc;
    sob1 = sob2 = ssrc; // sob2 = ssrc, sob1 = sob2  2번 호출

    fob1.ShowData(); // 결과 출력
    fob2.ShowData();
    sob1.ShowData();
    sob2.ShowData();

    return 0;
}