#include <iostream>
using namespace std;

int main(){

    int a = 10, b = 11;
    if ((a + b) <= 20 && (a + b) >= 10) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    //---------------------------------------

    int i = 11;
    int fl = 0;

    if (i == 1){
        cout << "FALSE" << endl;
        goto next_;
    } 
    for (int j = 2; j < i; j++){
        if (i % j == 0) {
            cout << "FALSE" << endl;
            fl = 1;
            break;
        }
    }
    if (fl == 0) cout << "TRUE" << endl;
next_:

    //---------------------------------------

    const int s = 10, d = 0;

    if ((s == 10) && (d == 10) || (s + d) == 10) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    //---------------------------------------

    const int x = 10; 
    int matrix[x][x];
    int step = 0;

    for (int o = 0; o < x; o++){
        for (int p = 0; p < x; p++){
            if (p == step) {
                matrix[o][p] = 1;
            } else {
                matrix[o][p] = 0;    
            }
        }
        step++;
    }

    for (int o = 0; o < x; o++){
        for (int p = 0; p < x; p++){
            cout << matrix[o][p];
        }
        cout << endl;
    }
    
    //---------------------------------------

    int year = 2000;

    if (year % 4 == 0) {
        if (year % 100 != 0) {
            cout << "TRUE" << endl;
        } else if (year % 400 == 0) {
            cout << "TRUE" << endl;
        } else {
            cout << "FALSE" << endl;
        }
     } else {
         cout << "FALSE" << endl;
     }

    return 0;
}