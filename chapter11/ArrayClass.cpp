#include <iostream>
using namespace std;

// [] 배열 연산자 오버로딩을 통해 배열 범위를 검사하지 않는 C/C++의 단점을 보완할 수 있음
class BoundCheckIntArray
{
private:
    int *arr;
    int arrlen;
public:
    BoundCheckIntArray(int len): arrlen(len)
    {
        arr = new int[len];
    }

    int& operator[](int idx)
    {
        if(idx < 0 || idx >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    ~BoundCheckIntArray()
    {
        delete []arr;
    }
};

int main()
{
    BoundCheckIntArray arr(5);

    for(int i = 0; i < 5; i++)
    {
        arr[i] = (i+1) * 11;
    }
    // 배열 인덱스는 5까지 존재하나 아래의 for문은 6까지 접근하므로 마지막 요소인 arr[5]에 접근 시 에러문구 출력
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}