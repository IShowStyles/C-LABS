#include <iostream>
#include <fstream>
using namespace std;

class person
{
public:
    string name;
    string secondlName;
    int m_day;
    int m_month;
    int m_year;

    void getName() 
    {
        cout << "name || secondName || day || month || year" << endl;
        cin >> name >> secondlName >> m_day >> m_month >> m_year;
    }

    void print()
    {
        cout << name << secondlName << "|| date birthday" << m_day << "/" << m_month << "/" << m_year;
    }
};

int main()
{
    person Vadim;

    Vadim.getName();
    Vadim.print();

    return 0;
}
