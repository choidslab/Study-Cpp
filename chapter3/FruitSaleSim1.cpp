//
// Created by 최두섭 on 2018. 8. 10..
//

#include <iostream>
using namespace std;

// 과일장수 클래스
class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }

    int SaleAppples(int money)
    {
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void ShowSaleResult()
    {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myMoney << endl << endl;
    }

};

// 과일소비자 클래스
class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }

    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleAppples(money);
        myMoney -= money;
    }

    void ShowBuyResult()
    {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl << endl;
    }

};

int main()
{
    // 과일 판매자 객체 생성
    // 과인 판매자 객체의 초기 금액: 1,000원, 소유 사과: 20개, 구매자가 지불한 금액: 0원
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);

    // 과일 소비자 객체 생성
    // 과일 소비자 객체의 초기 금액: 5,000원
    FruitBuyer customer;
    customer.InitMembers(5000);

    // 소비자 객체의 BuyApples()함수 호출을 통해 사과를 구매
    // 인자 값으로 판매자 객체를 의미하는 'seller'와 지불 금액 '2,000원'을 전달
    // seller를 통해 SaleApples()함수를 호출하게 되고, 해당 함수에 2,000원을 전달
    // SaleApple() 함수 내에서 2000원 금액만큼 사과개수를 소비자에게 return 해주고, seller의 사과 개수에서 판매한 개수만큼 감소, 주문 받은 금액 만큼 소유 금액 증가
    // 마지막으로 소비자 객체의 소유 금액에서 -2000원 해줌
    customer.BuyApples(seller, 2000);

    // 각 객체의 현재 멤버변수 상태를 출력
    cout << "과일 판매자의 현황 "<< endl;
    seller.ShowSaleResult();
    cout << "과일 구매자의 현황 " << endl;
    customer.ShowBuyResult();

    return 0;
}