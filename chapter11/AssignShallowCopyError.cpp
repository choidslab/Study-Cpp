#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    int age;
public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person(const Person &copy): age(copy.age)
    {
        name = new char [strlen(copy.name) + 1];
        strcpy(name, copy.name);
    }
    Person& operator=(Person& ref)
    {
        delete []name;
        int len = strlen(ref.name)+1;
        name = new char[len];
        strcpy(name, ref.name);
        age = ref.age;

        return *this;
    }
    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    // Destructor
    // 객체 생성시 Constructor가 호출된다면 객체 소멸시에는 Destructor가 호출 됨
    // 클래스 이름 앞에 '~'를 포함
    // 동적으로 객체 생성시, delete 처리를 destructor를 통해 처리한다.
    ~Person()
    {
        delete []name;
        cout << "Called Destructor!" << endl;
    }
};

int main()
{
    Person man1("Doo-Seop Choi", 32);
    Person man2("Min-Kyung Jo", 30);
    man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}