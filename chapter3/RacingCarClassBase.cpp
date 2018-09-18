//
// Created by 최두섭 on 2018. 8. 10..
//

#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

void Car::InitMembers(char *ID, int fuel)
{
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    cout << "소유자 ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
    if(fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if(curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if(curSpeed < CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    //run99.curSpeed == 100; // private으로 선언 되어 있기 때문에 클래스 외부에서 접근이 불가
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77;
    sped77.InitMembers("sped77", 100);
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();

    return 0;
}
