#include <iostream>
#include <fstream>
using namespace std;

class Base
{
public:
   
    virtual void PrintInfo()
    {
        cout << "Base." << endl;
    }
};

class Derived : public Base
{
public:
    virtual void PrintInfo() override 
    {
        cout << "Derived." << endl;
    }
};

int main()
{
    Base obj1;
    Derived obj2;

    Base* p;

    p = &obj1;
    p->PrintInfo(); 

    //указатель p на екземпляр продуктивного класу
    // і визиваємо PrintInfo()
    p = &obj2;
    p->PrintInfo(); // Derived - це є поліморфізм 
    return 0; 
}
