#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void power(int m, int n){
    double result = 1;
    for(int i = 1; i <= n; i++){
        result*=m;
    }
    cout << result << endl;
}


int main(){
    power(2,7);
    return 0;
}