#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template <typename T>
T maxNums (T a, T b)
{
    return (a > b) ? a : b;
};

int main()
{
    vector<int> myVector;

    myVector.push_back(222);
    myVector.push_back(123);
    myVector.push_back(333);
    myVector.push_back(1246);

    for (int i = myVector.size() - 1; i >= 0; i--)
    {
        cout << myVector.at(i) << endl;
    }

    myVector.clear();

    cout << "size vector " << myVector.size() << endl;

    return 0;
}
