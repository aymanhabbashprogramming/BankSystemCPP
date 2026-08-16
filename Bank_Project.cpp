using namespace std;
#include <string>
#include <iostream>

int ReadNumber() {
    int Number = 0;
    cout << "Enter Number\n";
    cin >> Number;
    return Number;
}

int main()
{
    cout << "________ MAIN VERSION ________\n";
    cout << endl;
    cout << ReadNumber();
    cout << endl;

    return 0;
}