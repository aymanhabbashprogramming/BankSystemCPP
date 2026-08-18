using namespace std;

#include <string>
#include "UserInfoLibrary.h"
#include <iostream>


int ReadNumber()
{
    int Number = 0;

    cout << "Enter Number\n";
    cin >> Number;

    return Number;
}


int main()
{
    // Create a new user
    clsUserInfo User1(
        101,
        "ahmad123",
        "Ahmad Ali",
        "ahmad@gmail.com",
        "0551234567"
    );

    // Display user information
    cout << "User ID   : " << User1.GetUserID() << endl;
    cout << "Username  : " << User1.GetUsername() << endl;
    cout << "Full Name : " << User1.GetFullName() << endl;
    cout << "Email     : " << User1.GetEmail() << endl;
    cout << "Phone     : " << User1.GetPhone() << endl;
    cout << "Active    : " << (User1.IsActive() ? "Yes" : "No") << endl;

    cout << "\n------------------------\n";

    // Update user information
    User1.SetFullName("Ahmad Mohammed Ali");
    User1.SetPhone("0559876543");

    // Display updated information
    cout << "Updated Information:\n";
    cout << "Full Name : " << User1.GetFullName() << endl;
    cout << "Phone     : " << User1.GetPhone() << endl;

    cout << "\n------------------------\n";

    // Deactivate the user
    User1.Deactivate();

    cout << "Account Active: "
        << (User1.IsActive() ? "Yes" : "No") << endl;

    cout << "\n------------------------\n";

    // Read a number
    cout << "Welcome to Bank System\n";
    cout << "You entered: " << ReadNumber() << endl;

    return 0;
}