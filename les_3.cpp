#include <iostream>
#include "les_3_inc.cpp"

int main(){
    //----------------------------------------------------
    const int a = 1, b = 2, c = 3, d = 4;
    double r;
    r = (double)a * ((double)b + ((double)c / (double)d));
    std::cout << r << std::endl;

    //----------------------------------------------------
    int i = 100;
    int rr = (i > 21) ? (i - 21) * 2 : i - 21;
    std::cout << rr << std::endl;

    //----------------------------------------------------
    rrr = (double)aa * ((double)bb + ((double)cc / (double)dd));
    std::cout << rrr << std::endl;

    //----------------------------------------------------
    int cube[3][3][3] = {0};
    cube[1][1][1] = 10;
    int *res = &cube[1][1][1];
    std::cout << *res << std::endl;
    printf("%p", * (cube + 18));
    //std::cout << * (cube + 18) << std::endl;



}