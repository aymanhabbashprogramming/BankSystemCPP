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

    static int CountWords(string Text)
    {
        int Counter = 0;
        bool InWord = false;

        for (int i = 0; i < Text.length(); i++)
        {
            if (Text[i] != ' ' && !InWord)
            {
                Counter++;
                InWord = true;
            }
            else if (Text[i] == ' ')
            {
                InWord = false;
            }
        }

        return Counter;
    }

    static string ReverseString(string Text)
    {
        string ReversedText = "";

        for (int i = Text.length() - 1; i >= 0; i--)
        {
            ReversedText += Text[i];
        }

        return ReversedText;
    }
};