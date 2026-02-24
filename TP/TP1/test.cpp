#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>

using namespace std; // directive that allows to all elements from std (cout, )

int main() {
    cout <<"hello" << endl;
    int a;
    // cin >> a;
    cout << a << endl;

    char name[20] ="manut";
    strcpy(name, "dara") ;
    cout << name << endl;

    string my_name = "SEAN Manutnithya";
    my_name = "SEAN MANUTNITHYA";
    cout << my_name << endl;

    char name1[10] = "me";
    string name2 = "me";
    
    if(name2 == name1){
        cout << 1 + 1 << endl;
    }
    
    bool isOpen = false;
    if(name2 == name1) isOpen = true;

    // won't run if fasle condition
    cout << isOpen << endl ;

    // name2.empty(); // check is there anything the variable or not

    cout << 4 % 2 << endl;
    if(isOpen){
        cout << 1 + 10 << endl;
    }

    string emp;
    if(emp.empty()) isOpen = true;
    if(!isOpen){
        cout << "add some value" << endl;
    }else{
        cout <<"well done" << endl;
    }
    cout << isOpen << endl;

    // post increment
    int b = 10;
    int result1 = b++;
    cout << b << endl;

    // pre increment
    int c = 10;
    int result2 = c++; // 10 is called pre-increment mean it resigned the result2 before it does math
    int result3 = ++c; // 11
    cout << result2 << endl;// 10;
    cout << c << endl;// 11


    int m = 100;
    int n = 1000;

    bool isBigger = m < n;
    cout << isBigger << endl;
    if(isBigger) {cout <<  "true" << endl;
    }else {
        cout << "false" << endl;
    }

    // Cpp rendom number
    int rendom;
    srand(time(0));
    rendom = rand() % (100 - 10+1) +1;
    cout << rendom << endl;


    // last character of string
    string testname ="manutnithya";
    cout << testname[testname.length() - 1] << endl;

    int num_list[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){
        cout << num_list[i] << endl;
        cout << num_list[i] << "\t";
    }
    // lenght of integer arrays
    cout << sizeof(num_list) / sizeof(num_list[0])<< endl;
    
    // for loop
    int a1 = 10;
    int arr[4] ={1,2,3,5};
    // a1 have the amount of step of arr length
    // a1 = 4 -> 0 - 3
    for(int a1 : arr)cout << "text" << a1 << endl;
    
    char spe = '#';
    for (int st = 0; st < 1000; st++){
        if(st % 2 == 0){
            cout << spe << "  ";
        }
        cout << spe << "";
    }


    // overload function is a function that have the same name but has different paramater, different return;

    return 0;
}

    int add(int a, int b){
        return a + b;
    }
    float add(float a, float b){
        return a + b;
    }