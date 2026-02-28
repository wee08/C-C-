#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int power(int m, int n){
    double result = 1;
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

int main(){
    int result; 
    result = power(2,7);
    cout << result << endl;
    result = sumSquare(10);
    cout << result << endl;
    return 0;
}