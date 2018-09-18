#include <iostream>
using namespace std;


// Class Template
template <class T>
class Point
{
private:
    T xpos, ypos;
public:
    Point(T x=0, T y=0): xpos(x), ypos(y)
    {}
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
};

int main()
{
    Point<int> pos1(3, 4);
    pos1.ShowPosition();

    Point<double> pos2(2.4, 3.6);
    pos2.ShowPosition();

    Point<char> pos3('P','F');
    pos3.ShowPosition();

    return 0;
}