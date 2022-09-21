#include <iostream>
#include <fstream>
using namespace std;

template <typename T>
T maxNums (T a, T b)
{
    return (a > b) ? a : b;
};

int main()
{
    int i = maxNums(4, 8);
    cout << i << endl;
    return 0;
}
