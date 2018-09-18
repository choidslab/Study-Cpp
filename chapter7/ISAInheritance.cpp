#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
    char owner[50];
public:
    Computer(char * name)
    {
        strcpy(owner, name);
    }
    void Calculate()
    {
        cout << "요청 내용을 계산합니다." << endl;
    }
};

class Notebook : public Computer
{
private:
    int Battery;
public:
    Notebook(char *name, int initChag): Computer(name), Battery(initChag)
    {

    }
    void Charging()
    {
        Battery += 5;
    }
    void UseBattery()
    {
        Battery -= 1;
    }
    void MovingCal()
    {
        if(GetBatteryInfo() < 1)
        {
            cout << "충전이 필요합니다." << endl;
            return;
        }

        cout << "이동하면서";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo()
    {
        return Battery;
    }
};

class TabletPC: public Notebook
{
private:
    char regstPenModel[50];
public:
    TabletPC(char *name, int initChag, char *pen): Notebook(name, initChag)
    {
        strcpy(regstPenModel, pen);
    }
    void Write(char * penInfo)
    {
        if(GetBatteryInfo() < 1)
        {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        if(strcmp(regstPenModel, penInfo) != 0)
        {
            cout << "등록된 펜이 아닙니다.";
            return;
        }
        cout << "필기 내용을 처리합니다." << endl;
        UseBattery();
    }
};

int main()
{
    Notebook nc("최두섭", 5);
    TabletPC tn("조민경", 5, "ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");

    return 0;
}