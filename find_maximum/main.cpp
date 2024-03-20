#include<iostream>
using namespace std;

int main(){
    int num1 , num2 , num3;
    cout << "Input num1: ";
    cin >> num1;
    cout << "Input num2: ";
    cin >> num2;
    cout << "Input num3: ";
    cin >> num3;

    if (num1 > num2 ){

        if (num1 > num3){
            cout << "Maximum = " << num1;
        } else{
            cout << "Maximum = " << num3;
        }
    }
    else{

        if (num2 > num3){
            cout << "Maximum = " << num2;
        } else{
            cout << "Maximum = " << num3;
        }
    }

    return 0;
}