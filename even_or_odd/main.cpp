#include <iostream>
using namespace std;

int main() {
    cout << "Enter any number to check even or odd: ";
    int n;
    cin >> n;
    if (n%2 == 0){
        cout << "Number is Even.";
    }
    else
        cout << "Number is Odd.";

    return 0;
}
