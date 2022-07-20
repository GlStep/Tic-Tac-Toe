#include "tic_fnc.hpp"

#include <iostream>
#include <vector>
#include <string>

int main() {

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

    while(1) {

    }

    return 0;
}
