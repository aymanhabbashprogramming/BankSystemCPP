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

    return 0;
}