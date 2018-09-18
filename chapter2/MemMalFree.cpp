//
// Created by 최두섭 on 2018. 8. 8..
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len)
{
    // len bytes 만큼의 메모리 공간을 heap에 생성
    // malloc()의 경우 반환형이 void * type이므로 적절한 형 변환(Casting)이 이루어져야 한다.
    // 해당 예제에서는 (char *)를 명시하여 char * type으로 형 변환을 하였다.
    char * str = (char *)malloc(sizeof(char) * len);

    return str; // 문자열 주소의 첫 주소를 반환 char * type을 반환
}

int main()
{
    // C언어 malloc -> C++ new 키워드
    // ex) int *ptr = new int;
    //     double *ptr = new double;
    //     int *arr = new int[3]; --> 배열의 크기가 3인 공간 할당
    //     double *arr = new double[3];
    //
    // C언어 free() -> C++ delete 키워드
    // ex) delete ptr; -> ptr 변수를 메모리 공간에서 해제
    //     delete []arr -> arr 배열을 메모리 공간에서 해제

    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    free(str); // heap 할당 공간 해제

    return 0;
}
