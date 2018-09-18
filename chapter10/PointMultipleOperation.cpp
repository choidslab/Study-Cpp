#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    // 생성자, x와 y 값을 인자로 받아 멤버변수 xpos, ypos를 초기화
    Point(int x = 0, int y = 0): xpos(x), ypos(y)
    {

    }
    void ShowPosition() const
    {
        cout << "[" << xpos << ", "  << ypos << "]" << endl;
    }
    Point operator*(int times)
    {
        Point pos(xpos * times, ypos * times);
        return pos;
    }
    friend Point operator*(int times, Point & ref);

};

Point operator*(int times, Point & ref)
{
    return ref * times;
}

int main()
{
    Point pos(1, 2);
    Point cpy;

    cpy = 3 * pos;
    cpy.ShowPosition();
    pos.ShowPosition();

    cpy = 3 * pos * 2 ;
    cpy.ShowPosition();
    pos.ShowPosition();


    return 0;
}