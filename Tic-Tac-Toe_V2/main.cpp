#include "tic_fnc.hpp"

#include <iostream>
#include <string>

int main() {
    //row and column variables
    int row_cur, column_cur;

    //Creating instances of the two players, which will play against each other
    Player player1;
    Player player2;

    //Creating instance of the field, which will include all the field logic
    Field playing_field;

    //creating the playing field and starting the game
    playing_field.create_playing_field();
    playing_field.start_game();

    //Starting by asking the name of the player
    player1.set_name(1);
    player2.set_name(2);

    playing_field.show_field();

    std::string player1_name = player1.get_name();
    std::string player2_name = player2.get_name();

    while(1) {
        player1.set_data_player_row();
        player1.set_data_player_column();

        row_cur = player1.get_data_player_row();
        column_cur = player1.get_data_player_column();

        if(playing_field.check_space(row_cur, column_cur) == false) {
            std::cout << "This field is already occupied! Ending game!" << std::endl;
            break;
        } else if(row_cur < 0 || row_cur > 2 || column_cur < 0 || column_cur > 2) {
            std::cout << "This is an invalid input! Ending game!" << std::endl;
            break;
        } else {
            std::cout << "Checking if input is legal." << std::endl;
            std::cout << "Everything is okay" << std::endl;
        }

        playing_field.write_field(row_cur, column_cur, 1);

        playing_field.show_field();

        if(playing_field.check_win(row_cur, column_cur) == true) {
            std::cout << player1_name << ", you have won the game!" << std::endl;
            break;
        }

        player2.set_data_player_row();
        player2.set_data_player_column();

        row_cur = player2.get_data_player_row();
        column_cur = player2.get_data_player_column();

        if(playing_field.check_space(row_cur, column_cur) == false) {
            std::cout << "This field is already occupied! Ending game!" << std::endl;
            break;
        } else if(row_cur < 0 || row_cur > 2 || column_cur < 0 || column_cur > 2) {
            std::cout << "This is an invalid input! Ending game!" << std::endl;
            break;
        } else {
            std::cout << "Checking if input is legal." << std::endl;
            std::cout << "Everything is okay" << std::endl;
        }

        playing_field.write_field(row_cur, column_cur, 2);

        playing_field.show_field();

        if(playing_field.check_win(row_cur, column_cur) == true) {
            std::cout << player2_name << ", you have won the game!" << std::endl;
            break;
        }
    }

    std::cout << "The game has ended! Thank you for playing!" << std::endl;

    return 0;
}
