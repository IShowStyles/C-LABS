#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
    string name;      
    int age;            
};
class Employee : public Person
{
public:
    string company; 

    void getInfo()
    {
        
        cout << "Name: " << "Age: " << "company" << endl;
        cin >> name >> age >> company;
    }
    
    void display()
    {
        cout << "Name: " << name << "\tAge: " << age <<"Company: "<< company << endl;
    }
   
};

int main()
{

    Employee Vlad;
    Vlad.getInfo();
    Vlad.display();


    return 0;
}
