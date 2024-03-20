#include <iostream>
using namespace std;

int main() {
    cout << "Enter any character: ";
    char ch;
    cin >> ch;
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') ||(ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') ||(ch == 'U'))
    {
        cout << ch << " is Vowel.";
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is Consonant.";
    }
    else
        cout << "Character is NOT ALPHABET.";

    return 0;
}
