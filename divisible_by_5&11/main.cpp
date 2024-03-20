#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input number: ";
    cin >> n;

    if (n%5 == 0 && n%11 == 0){
        cout <<"Number is divisible by 5 and 11";
    } else{
        cout <<"Number is not divisible by 5 and 11";

    }
    return 0;
}
