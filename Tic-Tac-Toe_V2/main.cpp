#include "tic_fnc.hpp"

#include <iostream>
#include <vector>
#include <string>

int main() {

    //Creating instances of the two players, which will play againt each other
    Player player1;
    Player player2;

    //Creating instance of the field, which will include all the field logic
    Field playing_field;

    //Starting by asking the name of the player
    player1.set_name(1);
    player2.set_name(2);

    std::cout << player1.get_name() << std::endl;
}
