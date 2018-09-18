#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n)
    {
        // this는 포인터다! 객체 자신의 주소 값을 갖고 있음
        cout << "New Object: " << this << endl;
    }
    SoSimple(const SoSimple &copy): num(copy.num)
    {
        cout << "New Copy obj: " << this << endl;
    }
    ~SoSimple()
    {
        cout << "Destroy obj: " << this << endl;
    }

};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "Parm ADR: " << &ob << endl;
    return ob;
}

int main()
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj);
    cout << "Return Obj" << &tempRef << endl;

    return 0;
}