#include <iostream>
#include "PointTemplate.h"
using namespace std;

template <class T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{

}

template <class T>
void Point<T>::ShowPosition() const
{
    cout << '[' << xpos << ", " << ypos << ']' << endl;
}

