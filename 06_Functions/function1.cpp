#include <iostream>
#include <string>
using namespace std;

void printHello()
{
    cout << "Hello, World!" << endl;
}

// declaration of the function
void serveTea(int cups);

void serveTea(string teaType = "Green Tea")
{
    cout << "Serving " << teaType << endl;
}

int main()
{
    printHello();
    serveTea(3);
    serveTea("Lemon Tea");
    return 0;
}

// definition of the function
void serveTea(int cups)
{
    cout << "Serving " << cups << " cups of tea." << endl;
}