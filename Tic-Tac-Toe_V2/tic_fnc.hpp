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
    std::string get_name();
    int data_player_row();
    int data_player_column();
    int convert_position(int row, int column);
    int check_space();
};

#endif
