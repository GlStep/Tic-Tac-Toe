#ifndef TIC_HPP
#define TIC_HPP

#include <string>
#include <vector>
#include <iostream>

class Player {
private: 
    int player_number;
    std::string player_name;

public:
    Player();
    std::string new_name(int player_number);
    std::string get_name();
    int data_player_row();
    int data_player_column();
};

class Field {
private: 
    int row;
    int column;

public:
    Field();
    void show_field();
    int check_space();
    bool check_win(int row, int column);
};

#endif
