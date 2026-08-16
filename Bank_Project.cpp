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
    cout << "Hello, I am on branch dev";

    cout << endl;
    cout << ReadNumber();

    cout << "Hello, I am on branch main";

    return 0;
}