#pragma once
#include <string>
using namespace std;

class clsUserInfo
{
private:
    int _UserID;
    string _Username;
    string _FullName;
    string _Email;
    string _Phone;
    bool _IsActive;

public:

    clsUserInfo()
    {
        _UserID = 0;
        _Username = "";
        _FullName = "";
        _Email = "";
        _Phone = "";
        _IsActive = true;
    }

    clsUserInfo(int UserID, string Username, string FullName,
        string Email, string Phone, bool IsActive = true)
    {
        _UserID = UserID;
        _Username = Username;
        _FullName = FullName;
        _Email = Email;
        _Phone = Phone;
        _IsActive = IsActive;
    }

    int GetUserID()
    {
        return _UserID;
    }

    string GetUsername()
    {
        return _Username;
    }

    string GetFullName()
    {
        return _FullName;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    bool IsActive()
    {
        return _IsActive;
    }

    void SetUsername(string Username)
    {
        _Username = Username;
    }

    void SetFullName(string FullName)
    {
        _FullName = FullName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    void Activate()
    {
        _IsActive = true;
    }

    void Deactivate()
    {
        _IsActive = false;
    }
};