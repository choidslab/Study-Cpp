#include <iostream>
#include <cstring>
using namespace std;

// 직원 클래스
class PermanentWorker
{
private:
    char name[100];
    int salary; // 매달 지불해야 하는 급여액
public:
    PermanentWorker(char *name, int money): salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void SHowSalaryInfo() const
    {
        cout << "name: " << name << endl;
        cout << "salary: " << GetPay() << endl << endl;
    }
};

// 핸들러 클래스 (직원별 정보를 저장)
class EmployeeHandler
{
private:
    // PermanentWorker 객체를 저장하기 위한 객체 배열
    PermanentWorker *empList[50];
    int empNum;
public:
    EmployeeHandler(): empNum(0)
    {
        //empty
    }
    void AddEmployee(PermanentWorker *emp) // PermanentWorker *emp = new PermenentWorker();
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for(int i=0;i<empNum;i++)
        {
            empList[i]->SHowSalaryInfo();
        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for(int i = 0;i<empNum;i++)
        {
            sum += empList[i]->GetPay();
        }
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
    handler.AddEmployee(new PermanentWorker("CHOI", 1500));
    handler.AddEmployee(new PermanentWorker("JO", 2000));

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();

    return 0;
}