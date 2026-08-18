using namespace std;

#include <iostream>
#include <string>
#include "UserInfoLibrary.h"

int main()
{
    clsUserInfo User1(
        101,
        "ahmad123",
        "Ahmad Ali",
        "ahmad@gmail.com",
        "0551234567"
    );

    cout << "User Information\n";
    cout << "------------------------\n";

    User1.PrintUserInfo();

    cout << "\n------------------------\n";

    User1.SetUserID(202);
    User1.SetUsername("ahmad202");
    User1.SetFullName("Ahmad Mohammed Ali");

    cout << "Updated User Information\n";
    cout << "------------------------\n";

    User1.PrintUserInfo();

    cout << "\n------------------------\n";

    User1.Deactivate();

    cout << "User Status: "
        << User1.GetUserStatus() << endl;

    return 0;
}