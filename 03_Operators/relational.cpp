#include <iostream>
using namespace std;

int main()
{
    int cups;

    cout << "Enter the number of cups: ";
    cin >> cups;

    if (cups > 20)
    {
        cout << "You get a Gold Badge!" << endl;
    }
    else if (20 >= cups && cups >= 10)
    {
        cout << "You get a Silver Badge!" << endl;
    }
    else
    {
        cout << "You get no Badge!" << endl;
    }

    return 0;
}