#include "tic_fnc.hpp"

#include <iostream>
#include <string>

Player::Player()
{
    //constructor for the Player class
}

Field::Field()
{
    //constructor for the Field class
}

//getting the new name of the Player and saving it
void Player::set_name(int player_number) {
    std::string player_name;
    std::cout << "Player " << player_number << ". Please enter your name." << std::endl;
    std::cin >> player_name;
    std::cout << player_name << ", welcome to a game of Tic Tac Toe" << std::endl;

    player_name_ = player_name;
}

//retrieving the name of the player for other purposes
std::string Player::get_name() {
    return player_name_;
}

//returns the value, in which row the player wants to play
void Player::set_data_player_row() {
    int row;

    std::cout << player_name_ << ", what row do you want to play?" << std::endl;
    std::cin >> row;
    std::cout << std::endl;

    row_ = row - 1;
}

int Player::get_data_player_row() {
    return row_;
}

//returns the value, in which column the player wants to play
void Player::set_data_player_column() {
    int column;

    std::cout << player_name_ << ", what column do you want to play?" << std::endl;
    std::cin >> column;
    std::cout << std::endl;

    column_ = column - 1;
}

int Player::get_data_player_column() {
    return column_;
}

//create the playing field as a 3-by-3 matrix with empty spaces
void Field::create_playing_field() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            playfield_[i][j] = "-";
        }
    }
}

//displays a welcome message for starting the game
void Field::start_game() {
    std::cout << "Welcome to a game of Tic Tac Toe!" << std::endl;
}

//before writing X or O to field, check, if the field is already occupied
bool Field::check_space(int row, int column) {
    if(playfield_[row][column] == "X" || playfield_[row][column] == "O") {
        return false;
    } else {
        return true;
    }
}

//write the corresponding value to the field
void Field::write_field(int row, int column, int player_number) {
    if(player_number == 1) {
        playfield_[row][column] = "X";
    } else {
        playfield_[row][column] = "O";
    }
}

//displays the updated field after each input by the players
void Field::show_field() {
    std::cout << playfield_[0][0] << "#" << playfield_[0][1] << "#" << playfield_[0][2] << std::endl;
    std::cout << "#####" << std::endl;
    std::cout << playfield_[1][0] << "#" << playfield_[1][1] << "#" << playfield_[1][2] << std::endl;
    std::cout << "#####" << std::endl;
    std::cout << playfield_[2][0] << "#" << playfield_[2][1] << "#" << playfield_[2][2] << std::endl;
}

//checks the individual values of the field and decides, if there is a winner yet or not
bool Field::check_win(int row, int column) {
    bool status;

    if(playfield_[0][0] == "X" && playfield_[0][1] == "X" && playfield_[0][2] == "X") {
        status = true;
    } else if(playfield_[1][0] == "X" && playfield_[1][1] == "X" && playfield_[1][2] == "X") {
        status = true;
    } else if(playfield_[2][0] == "X" && playfield_[2][1] == "X" && playfield_[2][2] == "X") {
        status = true;
    } else if(playfield_[0][0] == "X" && playfield_[1][0] == "X" && playfield_[2][0] == "X") {
        status = true;
    } else if(playfield_[0][1] == "X" && playfield_[1][1] == "X" && playfield_[2][1] == "X") {
        status = true;
    } else if(playfield_[0][2] == "X" && playfield_[1][2] == "X" && playfield_[2][2] == "X") {
        status = true;
    } else if(playfield_[0][0] == "X" && playfield_[1][1] == "X" && playfield_[2][2] == "X") {
        status = true;
    } else if(playfield_[2][0] == "X" && playfield_[1][1] == "X" && playfield_[0][2] == "X") {
        status = true;
    } else if(playfield_[0][0] == "O" && playfield_[0][1] == "O" && playfield_[0][2] == "O") {
        status = true;
    } else if(playfield_[1][0] == "O" && playfield_[1][1] == "O" && playfield_[1][2] == "O") {
        status = true;
    } else if(playfield_[2][0] == "O" && playfield_[2][1] == "O" && playfield_[2][2] == "O") {
        status = true;
    } else if(playfield_[0][0] == "O" && playfield_[1][0] == "O" && playfield_[2][0] == "O") {
        status = true;
    } else if(playfield_[0][1] == "O" && playfield_[1][1] == "O" && playfield_[2][1] == "O") {
        status = true;
    } else if(playfield_[0][2] == "O" && playfield_[1][2] == "O" && playfield_[2][2] == "O") {
        status = true;
    } else if(playfield_[0][0] == "O" && playfield_[1][1] == "O" && playfield_[2][2] == "O") {
        status = true;
    } else if(playfield_[2][0] == "O" && playfield_[1][1] == "O" && playfield_[0][2] == "O") {
        status = true;
    } else {
        status = false;
    }

    return status;
}
