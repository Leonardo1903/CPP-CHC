#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teaOrder;
    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if (teaOrder == "green tea")
    {
        cout << "You ordered green tea." << endl;
    }
    return 0;
}