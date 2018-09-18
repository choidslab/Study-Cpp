//
// Created by 최두섭 on 2018. 8. 6..
//

#include <iostream>

using namespace std;

int main()
{
    int sales = 0;

    do
    {
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> sales;

        if(sales == -1)
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        cout << "이번 달 급여: " << 50 + (sales * 0.12) << endl;

    }while(1);

    return 0;
}