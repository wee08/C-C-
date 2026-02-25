#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;

void ConvertCelsiusToFahrenhite(){
    cout << endl << "Convert celsius to fahrenhite." << endl;
    int cel;
    cin >> cel;
    float fah = (cel * 9.0 / 5.0) + 32;
    cout << fah << " F" << endl;
}

void ConvertFahrenhiteToCelsius(){
    cout << endl << "Convert fahrenhite to celsius." << endl;
    int fah;
    cin >> fah;
    float cel = (fah - 32)*50.0 / 9.0;
    cout  << cel << " C" << endl;
}

void FindRootOfQuadraticEqs(){
    cout << "Find root of quadratic equation." << endl;
    int a,b,c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    int delta = pow(b,2) -( 4 * a * c);
    float root_1,root_2;

    if(delta > 0){
        cout << "Delta > 0" << endl;
        root_1 = ((-pow(b,2) + sqrt(delta))) /( 2*a);
        root_2 = ((-pow(b,2) - sqrt(delta))) /( 2*a);
        cout << "x1 = " << setprecision(2) << root_1 << endl << "x2 = " << root_2 << endl;
    }else if(delta == 0){
        cout << "Delta = 0" << endl;
        root_1 = -(pow(b,2)) / ( 2*a);
        root_2 = root_1;
        cout << setprecision(2) <<"x1 = x2 = " << root_1  << endl;
    }else {
        delta = -1 * delta;
        float imaPart = (sqrt(delta)) / (2 * a);
        float realPart = -(pow(b,2)) / ( 2 * a);

        cout << "delta < 0" << endl;
        cout << "x1 = " << setprecision(2) << realPart <<" + "<< imaPart << "i" <<endl;
        cout << "x2 = " << setprecision(2) << realPart <<"-"<< imaPart << "i" <<endl;
    }
}

int main(){

    int feature;
    while (true)
    {
        cout << endl << "(1) Convert celsius to fahrenhite." << endl;
        cout << "(2) Convert fahrenhite to celsius." << endl;
        cout << "(3) Find root of quadratic equation." << endl;
        cout << "(4) Compute BMI." << endl;
        cout << "(5) Sum numbers from 1 to n." << endl;
        cout << "Enter your choice:: " ;
        cin >> feature;
        switch(feature){
            case 1:
                ConvertCelsiusToFahrenhite();
                break;
            case 2:
                ConvertFahrenhiteToCelsius();
                break;
            case 3:
                FindRootOfQuadraticEqs();
                break;
            default:
                cout << "INVALID CHOICE...!" << endl;
                break;
        }
    }
   
    return 0;
}