using namespace std;

#include <iostream>
#include <string>
#include "MyStringLabrary.h"

int main()
{
    string Text = "ahmad ali";

    cout << "Original Text: " << Text << endl;

    cout << "Upper First Letter: "
        << clsMyStringLibrary::UpperFirstLetterOfEachWord(Text)
        << endl;

    cout << "Lower First Letter: "
        << clsMyStringLibrary::LowerFirstLetterOfEachWord(Text)
        << endl;

    cout << "Number of Words: "
        << clsMyStringLibrary::CountWords(Text)
        << endl;

    cout << "Reversed Text: "
        << clsMyStringLibrary::ReverseString(Text)
        << endl;

    return 0;
}