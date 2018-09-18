// Copy Constructor가 호출 되는 경우 3가지
// 1. 기존에 생성된 객체를 이용하여 새롭게 생성되는 객체를 초기화 하는 경우
// 2. 객체를 매개변수로 전달하는 경우
// 3. 객체를 Reference type으로 return하지 않는 경우


#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n)
    {

    }
    SoSimple(const SoSimple &copy): num(copy.num)
    {
        cout << "Called SoSimple(const SoSimple &copy)" << endl;
    }
    SoSimple& AddNum(int n)
    {
        num += n;
        return *this;
    }
    void ShowData()
    {
        cout << "num: " << num << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "return 이전" << endl;
    return ob;
}

int main()
{
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();

    return 0;
}