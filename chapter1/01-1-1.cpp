//
// Created by 최두섭 on 2018. 8. 6..
//

#include <iostream>

using namespace std;

int main()
{
    int i;
    int num, sum = 0;

    for(i = 0; i < 5; i++)
    {
        cout << i + 1 << "번째 정수 입력: ";
        cin >> num;
        sum += num;
    }

    cout << "합계: " << sum << endl;

    return 0;
}

