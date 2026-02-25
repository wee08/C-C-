#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void ConvertCelsiusToFahrenhite(){
    cout << endl << "Convert celsius to fahrenhite." << endl;
    int cel;
    cin >> cel;
    float fah = (cel * 9.0 / 5.0) + 32;
    cout << fah << " F" << endl;
}


int main(){

    int feature;

    cout << endl << "(1) Convert celsius to fahrenhite." << endl;
    cout << "(2) Convert fahrenhite to celsius." << endl;
    cout << "(3) Find root of quadratic equation." << endl;
    cout << "(4) Compute BMI." << endl;
    cout << "(5) Sum numbers from 1 to n." << endl;
    cin >> feature;
    if(feature == 1){
        ConvertCelsiusToFahrenhite();
    }
    
    return 0;
}