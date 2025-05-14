#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    while (true)
    {
        cout << "Do you want more Tea? (yes/no): ";
        cin >> response;

        if (response == "no")
        {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "You entered: " << response << endl;
    }

    cout << "No more tea for you!" << endl;

    return 0;
}