#include <iostream>
using namespace std;

int main()
{
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of cups: ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if (cups > 20)
    {
        discount = 0.2;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.1;
    }
    else
    {
        discount = 0.0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount: $" << totalPrice << endl;

    return 0;
}