#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
    return a > b ? a : b ;
}

int main()
{
    cout << Max(11, 15) << endl;
    cout << Max('T', 'Q') << endl;
    cout << Max(3.5, 7.5) << endl;
    cout << Max("Simple", "Best") << endl;

    return 0;
}