//
// Created by 최두섭 on 2018. 8. 11..
//

#include <iostream>
#include "Point.h"
using namespace std;
//
//bool Point::InitMembers(int xpos, int ypos)
//{
//    if(xpos < 0 || ypos < 0)
//    {
//        cout << "벗어난 범위의 값 전달" << endl;
//        return false;
//    }
//
//    x = xpos;
//    y = ypos;
//    return true;
//}
Point::Point(const int &xpos, const int &ypos)
{
    x = xpos;
    y = ypos;
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if(xpos < 0 || xpos > 100)
    {
        cout << "벗어난 범위 값 전달" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if(ypos < 0 || ypos > 100)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    y = ypos;
    return true;
}