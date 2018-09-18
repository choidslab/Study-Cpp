//
// Created by 최두섭 on 2018. 8. 8..
//

#include <iostream>

using namespace std;

typedef struct __Point{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *ptr = new Point;
    ptr->xpos = p1.xpos + p2.xpos;
    ptr->ypos = p1.ypos + p2.ypos;

    cout << "PntAdder()함수 내에서 출력: ";
    cout << ptr->xpos << ptr->ypos << endl;

    return *ptr;
}

int main()
{
    Point *ptr1 = new Point;
    Point *ptr2 = new Point;

    ptr1->xpos = 10;
    ptr1->ypos = 20;

    ptr2->xpos = 20;
    ptr2->ypos = 30;

    Point &ref = PntAdder(*ptr1, *ptr2);

    cout << ref.xpos << ref.ypos << endl;


    return 0;
}
