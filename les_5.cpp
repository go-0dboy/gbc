#include <iostream>
using namespace std;


// inverting the array
void iverting(int *n, int c){
    if (c == 0) return;
    n[c - 1] ^= 1;
    c--;
    iverting(n, c);
}

// print array
void printArray(int* n, int c){
    for(int i = 0; i < c; i++){
        if (i == c - 1)
        {
            cout << n[i] << endl;;
        } else {
            cout << n[i] << " : ";
        }
    }
}

// fill array
void fillArray(int* n, int c){
    n[0] = 1;
    for(int i = 1; i < c; i++){
        n[i] = n[i - 1] + 3; 
    }
    return;
}

// check balance
bool checkBalance(int* n, int c){
    int sum = 0, a = 0;
    for(int i = 0; i < c; i++){
        sum += n[i];
    }

    for (int i = 0; i < c; i++){
        a += n[i];
        if(a == (sum - a)) return true;
    }
    return false;
}

// shift array
void shiftArray(int* n, int c, int d){
    int buf = 0;
    if(d > 0){
        while(d != 0){
            buf = n[c - 1];
            for(int i = c; i != 0; i--){
                n[i - 1] = n[i - 2];
            }
            n[0] = buf;
            d--;
        }
    } else {
        d *= -1;
        while(d != 0){
            buf = n[0];
            for(int i = 0; i < c; i++){
                n[i] = n[i + 1];
            }
            n[c - 1] = buf;
            d--;
        }
    }
    
}

int main(){

    const int size = 10;
    int array[size] = {0,1,1,0,1,0,0,1,0,1};
    // print array
    printArray(array, size);
 
    // inverting the array
    iverting(array, size);
 
    // print an inverted array
    printArray(array, size);

    // ---------------------------------------------------

    const int size1 = 8;
    int array1[size1] = {0};
    // fill array
    fillArray(array1, size1);
 
    // print array
    printArray(array1, size1);    

    // ---------------------------------------------------

    const int size2 = 5;
    int array2[size2] = {10, 1, 2, 3, 4};
    
    // print array
    printArray(array2, size2);

    // check balance
    if(checkBalance(array2, size2)){
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    // ---------------------------------------------------

    const int size3 = 5;
    int array3[size3] = {1, 10, 5, 3, 8};
    int dir = -3;

    // print array
    printArray(array3, size3);
   
    // shift array
    shiftArray(array3, size3, dir);

    // print array
    printArray(array3, size3);

    // ---------------------------------------------------
    // 5 and 6, i didn’t comply
    // ---------------------------------------------------

    return 0;
}