#include <iostream>
#include <string>
using namespace std;

int main()
{
    string usertea;
    int teaQuantity;

    cout << "What Tea would you like to order? \n";
    getline(cin, usertea);

    cout << "How many cups of " << usertea << " would you like? \n";
    cin >> teaQuantity;

    cout << "You have ordered " << teaQuantity << " cups of " << usertea << ".\n";

    return 0;
}