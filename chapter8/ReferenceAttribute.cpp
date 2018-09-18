#include <iostream>
using namespace std;

class First
{
public:
    void FirstFunc()
    {
        cout << "FirstFunc()" << endl;
    }
    virtual void SimpleFunc()
    {
        cout << "First's SimpleFunc()" << endl;
    }
};

class Second: public First
{
public:
    void SecondFunc()
    {
        cout << "FirstFunc()" << endl;
    }
    virtual void SimpleFunc()
    {
        cout << "Second's SimpleFunc()" << endl;
    }

};

class Third: public Second
{
public:
    void ThirdFunc()
    {
        cout << "FirstFunc()" << endl;
    }
    virtual void SimpleFunc()
    {
        cout << "Third's SimpleFunc()" << endl;
    }
};

int main()
{
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();

    Second & sref = obj;
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();

    First & fref = obj;
    fref.FirstFunc();
    fref.SimpleFunc();

    return 0;
}