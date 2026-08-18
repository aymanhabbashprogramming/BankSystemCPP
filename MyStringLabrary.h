#pragma once

#include <string>
using namespace std;

class clsMyStringLibrary
{
public:

    static string UpperFirstLetterOfEachWord(string Text)
    {
        bool IsFirstLetter = true;

        for (int i = 0; i < Text.length(); i++)
        {
            if (Text[i] != ' ' && IsFirstLetter)
            {
                Text[i] = toupper(Text[i]);
            }

            IsFirstLetter = (Text[i] == ' ');
        }

        return Text;
    }

    static string LowerFirstLetterOfEachWord(string Text)
    {
        bool IsFirstLetter = true;

        for (int i = 0; i < Text.length(); i++)
        {
            if (Text[i] != ' ' && IsFirstLetter)
            {
                Text[i] = tolower(Text[i]);
            }

            IsFirstLetter = (Text[i] == ' ');
        }

        return Text;
    }
};