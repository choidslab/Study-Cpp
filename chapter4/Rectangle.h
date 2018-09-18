//
// Created by 최두섭 on 2018. 8. 11..
//

#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "Point.h"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;

public:
//    bool InitMembers(const Point &ul, const Point &lr);
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void ShowRecInfor() const;
};

#endif
