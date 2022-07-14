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
int Player::data_player_row() {
    int row;

    return row;
}

//returns the value, in which column the player wants to play
int Player::data_player_column() {
    int column;

    return column;
}

//before writing a X or O to field, check, if the field is already occupied
int Field::check_space() {
    return 0;
}

//displays the updated field after each input by the players
void Field::show_field() {

}

//checks the individual values of the field and decides, if there is a winnner yet or not
bool Field::check_win(int row, int column) {
    bool status;

    return status;
}
