#include <iostream>
using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, disountedPrice;

    cout << "Enter the number of cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    if (totalPrice > 100)
    {
        disountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Total price after discount: " << disountedPrice << endl;
    }
    else
    {
        cout << "Total price: " << totalPrice << endl;
    }
    return 0;
}