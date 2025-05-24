#include <iostream>
using namespace std;

// this function is calling by value
void pourTea(int cups)
{
    cups += 5;
    cout << "Poured cups of tea: " << cups << endl;
}

int main()
{
    int chaiCups = 2;
    pourTea(chaiCups);

    cout << "Total cups are: " << chaiCups << endl;
    return 0;
}