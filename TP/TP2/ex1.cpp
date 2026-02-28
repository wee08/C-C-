#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int power(int m, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result*=m;
    }
    return result;
}

int sumSquare(int n){
    double result = 0;
    for(int i = 1; i <=n ; i++){
        result += power(i,2);
    }
    return result;
}

int sumDigit(int n){
    int result = 0;
    for(int i = 1; i <= n; i++){
        result+=i;
    }
    return result;
}

int sumOdd(int n){
    int result = 0;
    for(int i = 1; i< n; i++){
        if(i % 2 == 0 ) continue;
        result += i;    
    }
    return result;
}

int main(){
    int n,m;
    int result; 
    while(true)
    {   
        cout << "Input n and m: ";
        if(n < 0 || m < 0) {
            cout << "INVALID" << endl;
        }else{
            cin >> n >> m;
            result = power(m,n);
            cout << result << endl;
            result = sumSquare(n);
            cout << result << endl;
            result = sumDigit(n);
            cout << result << endl;
            result = sumOdd(n);
            cout << result << endl;
        }
    }
    return 0;
}