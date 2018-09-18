//
// Created by 최두섭 on 2018. 8. 8..
//

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
    char *str = new char[len];

    return str; // 문자열 주소의 첫 주소를 반환 char * type을 반환
}

int main()
{
    char *str = MakeStrAdr(20);
    strcpy(str, "I'm studying C++!");
    cout << str << endl;

    delete []str;

    return 0;
}

