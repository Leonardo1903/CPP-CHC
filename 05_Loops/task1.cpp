#include <iostream>
using namespace std;

int main()
{
    int teaCups;
    cout << "Enter the number of tea cups: ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        teaCups--;
        cout << "You have " << teaCups << " tea cups." << endl;
    }

    cout << "No more tea cups left!" << endl;
    return 0;
}