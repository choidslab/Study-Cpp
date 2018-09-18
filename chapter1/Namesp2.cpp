//
// Created by 최두섭 on 2018. 8. 7..
//

#include <iostream>

namespace BestComImpl
{
    void SimpleFunc();
}

namespace ProgComImpl
{
    void SimpleFunc();
}

int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}
