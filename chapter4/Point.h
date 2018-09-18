//
// Created by 최두섭 on 2018. 8. 11..
//
#ifndef __POINT_H
#define __POINT_H

class Point
{
private:
    int x;
    int y;

public:
//    bool InitMembers(int xpos, int ypos);
    Point(const int &xpos, const int &ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};


#endif
