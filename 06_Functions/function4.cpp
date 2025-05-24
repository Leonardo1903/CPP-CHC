#include <iostream>
using namespace std;

int main()
{
    // Lambda function
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea." << endl;
    };

    preparedChai(2);
    return 0;
}