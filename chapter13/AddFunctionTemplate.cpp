#include <iostream>
using namespace std;

// Function Template
// 자료형은 컴파일 타임에 결정된다.
// Template을 사용하는 이유는 자료형의 유연성을 위함이다.
template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main()
{
    cout << Add<int>(15, 20) << endl;
    cout << Add<double>(1.5, 2.0) << endl;
    cout << Add<int>(1.5, 2.0) << endl;
    cout << Add<double>(15, 20) << endl;

    return 0;
}