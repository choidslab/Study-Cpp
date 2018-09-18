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

    Point operator+(const Point &ref)
    {
        Point pos(xpos + ref.xpos, ypos + ref.ypos);
        return pos;
    }

};

int main()
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator+(pos2);

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}