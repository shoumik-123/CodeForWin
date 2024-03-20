#include <iostream>
using namespace std;

int main() {
    cout << "Enter any character: ";
    char alpha;
    cin >> alpha;
    if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        cout << "Character is an ALPHABET.";
    }
    else
        cout << "Character is NOT ALPHABET.";

    return 0;
}
