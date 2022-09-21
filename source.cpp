#include <iostream>
#include <fstream>
using namespace std;

class sum
{
    int first;
    double second;
   
public:

    sum()
    {
        int first = 999;
        double second = 1.6;
    }

    void multyply(){
        cout << first * second << endl;
    }
};

int main()
{

    sum mult;

    mult.multyply();
    


    return 0;
}
