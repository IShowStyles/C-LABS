#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string path = "hello.txt";
        ofstream out;
    out.open(path);
    if (out.is_open())
    {
        out << "Hello_World" << endl;
    }

    cout << "End of program" << endl;
    return 0;
}
