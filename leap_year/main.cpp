#include <iostream>
using namespace std;

int main() {
    cout << "Enter year : ";
    int year;
    cin >> year;
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        cout << "LEAP YEAR";
    }
    else
        cout << "COMMON YEAR";

    return 0;
}
