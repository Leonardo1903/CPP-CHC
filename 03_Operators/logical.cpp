#include <iostream>
using namespace std;

int main()
{
    bool isStudent;
    int cups;

    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;
    cout << "How many cups of tea have you purchased?";
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "You are eligible for a discount!" << endl;
    }
    else
    {
        cout << "You are not eligible for a discount." << endl;
    }

    return 0;
}