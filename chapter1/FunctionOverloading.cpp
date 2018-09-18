//
// Created by 최두섭 on 2018. 8. 6..
//

#include <iostream>

using namespace std;

void MyFunc(void)
{
    cout << "MyfFunc(void) called" << endl;
}

void MyFunc(char c)
{
    cout << "MyfFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
    cout << "MyfFunc(int a, int b) called" << endl;
}

int main()
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);

    return 0;
}