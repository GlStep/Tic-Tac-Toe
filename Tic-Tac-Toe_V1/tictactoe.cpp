#include <iostream>
#include <string>
#include <vector>
#include <tuple>

#include "tic_functions.hpp"

//___________________________________Variables_________________________

int score1 = 0;
int score2 = 0;
int row1 = 0;
int column1 = 0;
int row2 = 0;
int column2 = 0;
int conv_position1 = 0;
int conv_position2 = 0;
int check_space1 = 0;
int check_space2 = 0;
int draw = 0;

std::string player_symbol_X = "X";
std::string player_symbol_O = "O";
std::string player1_name;
std::string player2_name;

std::vector<std::string> play_spaces;

//___________________________________Game Logic________________________

int main(){
	
	tictactoe_welcome();
	play_spaces = play_field(play_spaces);
	std::cout << "\nPlayer1, please enter your name: ";
	std::cin >> player1_name;
	std::cout << "\nPlayer2, please enter your name: ";
	std::cin >> player2_name;
	std::cout << "\n";

	while(score1 < 1 || score2 < 1){
    		
		conv_position1 = 0;
		current_field(play_spaces);
		std::cout << "\n" << player1_name << ", where do you want to play?\n";
		row1 = data_player1_row();
		if(row1 > 3){
			break;
		}

		column1 = data_player1_column();
		if(column1 > 3){
			break;
		}

		conv_position1 = convert_position(row1, column1);
		
		check_space1 = 0;

		while(check_space1 == 0){
			check_space1 = check_space(play_spaces, conv_position1);
			if (check_space1 == 0){
				break;
			}
		}
		
		if (check_space1 == 0){
			break;
		}

		play_spaces = current_play_field(play_spaces, conv_position1, "X");
		score1 = win_check_X(play_spaces);
		
		draw = draw_detection(play_spaces);
		if(draw == 1){
			break;
		}

		if(score1 == 20){
			break;
		}

		conv_position2 = 0;
		current_field(play_spaces);
		std::cout << "\n" << player2_name << ", where do you want to play?\n";
		
		row2 = data_player2_row();
		
		if(row2 > 3){
			break;
		}
		
		column2 = data_player2_column();
		if(column2 > 3){
			break;
		}
		
		conv_position2 = convert_position(row2, column2);
		
		check_space2 = 0;

		while(check_space2 == 0){
			check_space2 = check_space(play_spaces, conv_position2);
			if(check_space2 == 0){
				break;
			}
		}
		
		if(check_space2 == 0){
			break;
		}

		play_spaces = current_play_field(play_spaces, conv_position2, "O");
		score2 = win_check_O(play_spaces);
		
		draw = draw_detection(play_spaces);

		if(draw == 1){
			break;
		}

		if(score2 == 30){
			break;
		}
	}

	current_field(play_spaces);

	if(draw == 1){
		std::cout << "\n" << player1_name << ", " << player2_name << ", you have achieved a draw!";
	}

	if(score1 == 20){
		std::cout << "\n" << player1_name << " has won the game. Congratulations!";
	}else if(score2 == 30){
		std::cout << "\n" << player2_name << " has won the game. Congratulations!";
	}

	if(check_space1 == 0 || check_space2 == 0 || row1 > 3 || row2 > 3 || column1 > 3 || column2 > 3){
		std::cout << "\nSomeone has made an illegal move. Please try again later.";
	}
}
