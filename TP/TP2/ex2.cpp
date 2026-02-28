#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void displayStar(int n){
    cout << "Display stars n times" << endl;
    for(int i = 0; i < n; i++){
        cout << " * ";
    }

    cout << endl;
}

void displayNumbers(int n){
    cout << "Display n to 1" << endl;
    for(int i = n; i > 0; i--){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    while (true)
    {
        cout << "(1) Display star n times" << endl;
        cout << "(2) Display from n to 1" << endl;
        cout << "(3) Exit" << endl;
        int ops;
        cin >> ops;
        int n;

        if(ops == 1){
            cout << "n: ";
            cin >> n;
            displayStar(n);
        }else if (ops == 2){
            cout << "n: ";
            cin >> n;
            displayNumbers(n);
        }else if(ops == 3){
            break;
        }else{
            cout << "INVALID" << endl;
        }
    }
    
    return 0 ;
}