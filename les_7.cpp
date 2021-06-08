#include <iostream>

using namespace std;

int main(){

#define VAL(x,y) ((x) >= 0 && (x) < (y) ? 1 : 0)

    cout << VAL(110, 100) << endl;

// ----------------------------------------------------------

#define ELM(arr,a,b) **((arr) + (a)) + (b)

    int array[2][2] = {
        {1,2},
        {5,6}
        };


    cout << ELM(array, 0, 1) << endl;
 
    return 0;
}