#include <iostream>


int main(){

    int a = 0;
    char symbol = 'A';
    long b = 1000;
    float c = 3.14;
    double d = 1234.12343;
    bool flag = true;

    std::cout << " int = " << a << std::endl;
    std::cout << " char = " << symbol << std::endl;
    std::cout << " long = " << b << std::endl;
    std::cout << " float = " << c << std::endl;
    std::cout << " double = " << d << std::endl;
    std::cout << " bool = " << flag << std::endl;

    // --------------------------------------------
    enum Chips {EMPTY_, X_, O_};

    // --------------------------------------------
    const int widht = 3;
    const int hight = 3;

    Chips board_data[hight][widht] = {
        {EMPTY_, EMPTY_, EMPTY_},
        {EMPTY_, EMPTY_, EMPTY_},
        {EMPTY_, EMPTY_, EMPTY_},
    };

    // --------------------------------------------
    struct board_setup
    {
        int board_width; 
        int board_hight;
        Chips p1;
        Chips p2;       
    };

    using Board = struct board_setup;

    Board new_game;
    new_game.board_hight = 3;
    new_game.board_width = 3;
    new_game.p1 = X_;
    new_game.p2 = O_;

    // --------------------------------------------
    struct init
    {
        union def_type{
                int a; 
                float b; 
                bool c;
                } value;
        int is_int : 1;
        int is_float : 1;
        int is_bool : 1;
    };

    init new_type;
    new_type.value.c = true;
    new_type.is_bool = 1;
    new_type.is_float = 0;
    new_type.is_int = 0;

}