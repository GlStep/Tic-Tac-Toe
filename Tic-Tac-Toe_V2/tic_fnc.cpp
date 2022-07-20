#include "tic_fnc.hpp"

#include <iostream>
#include <vector>
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
std::string Player::set_name(int player_number) {
    std::string player_name;
    std::cout << "Player " << player_number << ". Please enter your name." << std::endl;
    std::cin >> player_name;
    std::cout << player_name << ", welcome to a game of Tic Tac Toe" << std::endl;

    player_name_ = player_name;

    return player_name;
}

//retirieving the name of the player for other purposes
std::string Player::get_name() {
    return player_name_;
}

//returns the value, in which row the player wants to play
void Player::set_data_player_row() {
    int row;

    std::cout << "What row do you want to play?" << std::endl;
    std::cin >> row;
    std::cout << std::endl;

    row_ = row;
}

int Player::get_data_player_row() {
    return row_;
}

//returns the value, in which column the player wants to play
void Player::set_data_player_column() {
    int column;

    std::cout << "What column do you want to play?" << std::endl;
    std::cin >> column;
    std::cout << std::endl;

    column_ = column;
}

int Player::get_data_player_column() {
    return column_;
}

//create the playing field as a 3-by-3 matrix
void Field::create_playing_field() {

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
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << playfield_[i][j];
        }
        std::cout << "" << std::endl;
    }
}

//checks the individual values of the field and decides, if there is a winner yet or not
bool Field::check_win(int row, int column) {
    bool status = false;

    return status;
}
