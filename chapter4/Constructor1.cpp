#include <iostream>
using namespace std;

class SimpleClass
{
private:
    int num1;
    int num2;
public:
    SimpleClass()
    {
        num1 = 0;
        num2 = 0;
    }
    SimpleClass(int n)
    {
        num1 = n;
        num2 = 0;
    }
    SimpleClass(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
//
//    SimpleClass(int n1 = 0, int n2 = 0)
//    {
//        num1 = n1;
//        num2 = n2;
//    }

    void ShowData()
    {
        cout << num1 << ' ' << num2 << endl;
    }
};

int main()
{
    SimpleClass sc1;
    sc1.ShowData();

    SimpleClass sc2(100);
    sc2.ShowData();

    SimpleClass sc3(100, 200);
    sc3.ShowData();


    return 0;
}
