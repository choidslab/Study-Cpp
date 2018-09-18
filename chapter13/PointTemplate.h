#ifndef __POINT_TEMPLATE_H
#define __POINT_TEMPLATE_H
#include <iostream>
using namespace std;
template <class T>
class Point
{
private:
    T xpos, ypos;
public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
};

template <class T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{

}

template <class T>
void Point<T>::ShowPosition() const
{
    cout << '[' << xpos << ", " << ypos << ']' << endl;
}


#endif //PRACTICECPLUS_POINTTEMPLATE_H
