#ifndef TIC_HPP
#define TIC_HPP

#include <string>
#include <vector>
#include <iostream>

class Player {
private:
    int row_, column_;
    int player_number_;
    std::string player_name_;

public:
    Player();
    std::string set_name(int player_number);
    std::string get_name();
    void set_data_player_row();
    int get_data_player_row();
    void set_data_player_column();
    int get_data_player_column();
};

class Field {
private: 
    int row_;
    int column_;
    int player_number_;
    std::string playfield_[3][3];

public:
    Field();
    void create_playing_field();
    void start_game();
    void show_field();
    bool check_space(int row, int column);
    void write_field(int row, int column, int player_number);
    bool check_win(int row, int column);
};

#endif
