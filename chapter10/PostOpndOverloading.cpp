#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0): xpos(x), ypos(y)
    {

    }
    void ShowPosition() const
    {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
    Point& operator++()
    {
        xpos += 1;
        ypos += 1;
        return *this;
    }
    const Point operator++(int)
    {
        const Point retobj(xpos, ypos);
        xpos += 1;
        ypos += 1;
        return retobj;
    }
    friend const Point operator--(Point &ref, int);

    friend Point& operator--(Point &ref);
};

Point& operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

const Point operator--(Point &ref, int)
{
    const Point retobj(ref);
    ref.xpos -= 1;
    ref.ypos -= 1;

    return retobj;
}

int main()
{
    Point pos(3, 5);
    Point cpy;

    (pos++)++;
    (pos--)--;

    cpy = pos--;
    cpy.ShowPosition();
    pos.ShowPosition();

    cpy = pos++;
    cpy.ShowPosition();
    pos.ShowPosition();
    return 0;
}