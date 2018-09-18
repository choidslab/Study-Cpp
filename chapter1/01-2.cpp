//
// Created by 최두섭 on 2018. 8. 6..
//

#include <iostream>

using namespace std;

void swap(int *n1, int *n2)
{
    int tmp;
    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void swap(char *c1, char *c2)
{
    char tmp;
    tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

void swap(double *d1, double *d2)
{
    double tmp;
    tmp = *d1;
    *d1 = *d2;
    *d2 = tmp;
}


int main()
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout << num1 << ' ' << num2 << endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    cout << ch1 << ' ' << ch2 << endl;

    double dbl1 = 1.111, dbl2 = 2.555;
    swap(&dbl1, &dbl2);
    cout << dbl1 << ' ' << dbl2 << endl;

    return 0;
}