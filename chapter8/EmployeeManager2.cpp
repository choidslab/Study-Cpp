#include <iostream>
#include <cstring>
using namespace std;

// 고용인 클래스
class Employee
{
private:
    char name[100];
public:
    Employee(char *name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        cout << "name: " << name << endl;
    }
};

// 직원 클래스
class PermanentWorker: public Employee
{
private:
    // char name[100]; 상위 클래스에서 이미 선언 되어 있으므로 삭제
    int salary; // 매달 지불해야 하는 급여액
public:
    PermanentWorker(char *name, int money): Employee(name), salary(money)
    {

    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
};

class TemporaryWorker : public Employee
{
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char *name, int pay): Employee(name), payPerHour(pay)
    {

    }
    void AddWorkTime(int time)
    {
        workTime += time;
    }
    int GetPay() const
    {
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
    }

};

class SalesWorker: public PermanentWorker
{
private:
    int salesResult;
    double bonusRatio;
public:
    SalesWorker(char *name, int money, double ratio): PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
    {

    }
    void AddSalesResult(int value)
    {
        salesResult += value;
    }
    int GetPay() const
    {
        return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
    }
    void ShowSalaryInfo() const
    {
        cout << "salary: " << GetPay() << endl;
    }
};

// 핸들러 클래스 (직원별 정보를 저장)
class EmployeeHandler
{
private:
    // 상위 클래스의 객체 포인터 변수는 하위 클래스의 객체를 가리킬 수 있으므로(하위 클래스의 객체 주소를 저장할 수 있음) 상위 클래스의 이름으로 객체 포인터 배열
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler(): empNum(0)
    {
        //empty
    }
    void AddEmployee(Employee *emp) // PermanentWorker *emp = new PermenentWorker();
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
//        for(int i=0;i<empNum;i++)
//        {
//            empList[i]->ShowSalaryInfo();
//        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
//        for(int i = 0;i<empNum;i++)
//        {
//            sum += empList[i]->GetPay();
//        }
        cout << "salary sum: " << sum << endl;
    }
    ~EmployeeHandler()
    {
        for(int i = 0; i<empNum; i++)
        {
            delete empList[i];
        }
    }
};

int main()
{
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("CHOI", 2000));

    TemporaryWorker * alba = new TemporaryWorker("JUNG", 700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    SalesWorker * seller = new SalesWorker("PARK", 1500, 0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();

    return 0;
}