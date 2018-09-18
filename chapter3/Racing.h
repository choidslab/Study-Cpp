//
// Created by 최두섭 on 2018. 8. 10..
//

#ifndef __CAR__H__
#define __CAR__H__

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


#endif
