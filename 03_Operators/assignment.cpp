#include <iostream>
using namespace std;

int main()
{
    int teaBags;
    cout << "Enter the number of tea bags: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        teaBags += 5;
    }
    cout << "Total tea bags: " << teaBags << endl;
    return 0;
}