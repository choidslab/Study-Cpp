//
// Created by 최두섭 on 2018. 8. 8..
//

#include <iostream>

using namespace std;

int main()
{
   int num = 12;
   int *ptr = &num;
   int **dptr = &ptr;

   int &ref = num; // num 변수에 reference 선언
   int *(&pref) = ptr; // 포인터 변수에 reference 선언
   int **(&dpref) = dptr; // 이중 포인터 변수에 reference 선언

   cout << ref << endl;
   cout << *pref << endl;
   cout << **dpref << endl;

   return 0;
}
