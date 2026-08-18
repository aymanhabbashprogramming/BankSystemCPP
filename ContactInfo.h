#pragma once

#include <iostream>
#include <string>

using namespace std;

class clsContactInfo
{
private:

    string _Phone;
    string _Email;
    string _Address;

public:

    clsContactInfo(string Phone, string Email, string Address)
    {
        _Phone = Phone;
        _Email = Email;
        _Address = Address;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string GetPhone()
    {
        return _Phone;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return _Email;
    }

    void SetAddress(string Address)
    {
        _Address = Address;
    }

    string GetAddress()
    {
        return _Address;
    }

    void PrintContactInfo()
    {
        cout << "Phone   : " << _Phone << endl;
        cout << "Email   : " << _Email << endl;
        cout << "Address : " << _Address << endl;
    }
};