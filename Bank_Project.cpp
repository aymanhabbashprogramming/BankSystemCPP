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
    cout << "Welcome to Bank System";
    cout << ReadNumber();
    cout << endl;

    return 0;
}