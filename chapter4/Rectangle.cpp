//
// Created by 최두섭 on 2018. 8. 11..
//

#include <iostream>
#include "Rectangle.h"
using namespace std;
//
//bool Rectangle::InitMembers(const Point &ul, const Point &lr)
//{
//    if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
//    {
//        cout << "잘못된 위치정보 전달" << endl;
//        return false;
//    }
//    upLeft = ul;
//    lowRight = lr;
//    return true;
//}

// Memeber Initializer를 이용한 객체 형태의 멤버변수 초기화
// 객체가 아닌 일반 멤버변수도 Member Initializer를 이용한 초기화 가능
Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2) :upLeft(x1, y1), lowRight(x2, y2)
{
    // empty
}

void Rectangle::ShowRecInfor() const
{
    cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << ']' << endl;
    cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << ']' << endl << endl;
}