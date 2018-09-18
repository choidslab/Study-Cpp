#include <iostream>
using namespace std;

class First
{
private:
    int num1, num2;
public:
    First(int n1 = 0, int n2 = 0): num1(n1), num2(n2)
    {

    }
    void ShowData()
    {
        cout << num1 << ", " << num2 << endl;
    }

    // First 클래스의 대입 연산자 오버로딩 함수
    First& operator=(First& ref)
    {
        cout << "First& operator=()" << endl;
        num1 = ref.num1;
        num2 = ref.num2;

        return *this;
    }

};

class Second: public First
{
private:
    int num3, num4;
public:
    Second(int n1, int n2, int n3, int n4): First(n1, n2), num3(n3), num4(n4)
    {

    }
    void ShowData()
    {
        // 상위(First) 클래스 객체의 정보 출력
        First::ShowData();
        // Seconde 객체 정보 출력
        cout << num3 << ", " << num4 << endl;
    }

    Second& operator=(Second& ref)
    {
        cout << "Second& operator=()" << endl;
        // 상위 클래스의 대입 연산자 오버로딩 함수를 명시하지 않을 경우
        // 하위 클래스에서는 상위 클래스의 연산자 오버로딩 함수를 호출하지 않기 때문에
        // 멤버 대 멤버 대입 연산이 이루어지지 않는다.
        // 따라서 아래의 First::operator=(ref);와 같이 명시하지 않을 경우 객체 생성 시 초기화 된 값으로 남아 있게 된다.
        // 본 예제에서는 상위 클래스의 멤버 변수인 num1, num2가 0으로 초기 값을 갖고 있게 된다.
        First::operator=(ref);
        num3 = ref.num3;
        num4 = ref.num4;

        return *this;
    }

};

int main()
{
    Second ssrc(111, 222, 333, 444);
    Second scpy(0, 0, 0, 0);

    scpy = ssrc;
    scpy.ShowData();

    return 0;
}