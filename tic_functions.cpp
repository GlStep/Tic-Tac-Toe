#include <string>
#include <vector>
#include <iostream>
#include <tuple>

//_________________________________Variables___________________________________________

int row1_func = 0;
int column1_func = 0;
int row2_func = 0;
int column2_func = 0;
int conv_position_func = 0;
int counter = 0;

//_________________________________Game Start___________________________________________

void tictactoe_welcome(){
	std::cout << "\nWelcome to Tic-Tac-Toe!";
	std::cout << "\n";
	std::cout << "Have fun!\n";
}

std::vector<std::string> play_field(std::vector<std::string> field){
	for(int i = 0; i < 9; i++){
		field.push_back("_");
	}
	return field;
}

//_________________________________Display_____________________________________________

void current_field(std::vector<std::string> field){
	std::cout << "\nHow the field looks right now: ";
	std::cout << "\n" << field[0] << " | "  << field[1] << " | " << field[2];
	std::cout << "\n" << field[3] << " | "  << field[4] << " | " << field[5];
	std::cout << "\n" << field[6] << " | "  << field[7] << " | " << field[8];
}

//____________________________________Data Input________________________________________

int data_player1_row(){
	std::cout << "\nWhich row? Row: ";
	std::cin >> row1_func;
	return row1_func;
}

int data_player1_column(){
	std::cout << "\nWhich column? Column: ";
	std::cin >> column1_func;
	return column1_func;
}

int data_player2_row(){
	std::cout << "\nWhich row? Row: ";
	std::cin >> row2_func;
	return row2_func;
}

int data_player2_column(){
	std::cout << "\nWhich column? Column: ";
	std::cin >> column2_func;
	return column2_func;
}

//___________________________________Game Logic________________________________________

int convert_position(int row, int column){
	if(row == 1 && column == 1){
		conv_position_func = 0;
	}else if(row == 1 && column == 2){
		conv_position_func = 1;
	}else if(row == 1 && column == 3){
		conv_position_func = 2;
	}else if(row == 2 && column == 1){
		conv_position_func = 3;
	}else if(row == 2 && column == 2){
		conv_position_func = 4;
	}else if(row == 2 && column == 3){
		conv_position_func = 5;
	}else if(row == 3 && column == 1){
		conv_position_func = 6;
	}else if(row == 3 && column == 2){
		conv_position_func = 7;
	}else if(row == 3 && column == 3){
		conv_position_func = 8;
	}
	return conv_position_func;
}

std::vector<std::string> current_play_field(std::vector<std::string> field_vector, int converted_position, std::string player_symbol){
	field_vector[converted_position] = player_symbol;
	return field_vector;
}

int win_check_X(std::vector<std::string> field_vector){
	if(field_vector[0] == "X" && field_vector[1] == "X" && field_vector[2] == "X"){
		return 20;
	}else if(field_vector[0] == "X" && field_vector[1] == "X" && field_vector[2] == "X"){
		return 20;
	}else if(field_vector[3] == "X" && field_vector[4] == "X" && field_vector[5] == "X"){
		return 20;
	}else if(field_vector[6] == "X" && field_vector[7] == "X" && field_vector[8] == "X"){
		return 20;
	}else if(field_vector[0] == "X" && field_vector[3] == "X" && field_vector[6] == "X"){
		return 20;
	}else if(field_vector[1] == "X" && field_vector[4] == "X" && field_vector[7] == "X"){
		return 20;
	}else if(field_vector[2] == "X" && field_vector[5] == "X" && field_vector[8] == "X"){
		return 20;
	}else if(field_vector[0] == "X" && field_vector[4] == "X" && field_vector[8] == "X"){
		return 20;
	}else if(field_vector[2] == "X" && field_vector[4] == "X" && field_vector[6] == "X"){
		return 20;
	}else{
		return 0;
	}
}

int win_check_O(std::vector<std::string> field_vector){
	if(field_vector[0] == "O" && field_vector[1] == "O" && field_vector[2] == "O"){
		return 30;
	}else if(field_vector[0] == "O" && field_vector[1] == "O" && field_vector[2] == "O"){
		return 30;
	}else if(field_vector[3] == "O" && field_vector[4] == "O" && field_vector[5] == "O"){
		return 30;
	}else if(field_vector[6] == "O" && field_vector[7] == "O" && field_vector[8] == "O"){
		return 30;
	}else if(field_vector[0] == "O" && field_vector[3] == "O" && field_vector[6] == "O"){
		return 30;
	}else if(field_vector[1] == "O" && field_vector[4] == "O" && field_vector[7] == "O"){
		return 30;
	}else if(field_vector[2] == "O" && field_vector[5] == "O" && field_vector[8] == "O"){
		return 30;
	}else if(field_vector[0] == "O" && field_vector[4] == "O" && field_vector[8] == "O"){
		return 30;
	}else if(field_vector[2] == "O" && field_vector[4] == "O" && field_vector[6] == "O"){
		return 30;
	}else{
		return 0;
	}
}

int check_space(std::vector<std::string> field_vector, int field){
	if(field_vector[field] == "X" || field_vector[field] == "O"){
		std::cout << "\nInvalid Input!";
		std::cout << "\nTry again!";
		return 0;
	}else{
		return 1;
	}
}

int draw_detection(std::vector<std::string> field_vector){
	counter = 0;
	for(int i = 0; i < field_vector.size(); i++){
		if(field_vector[i] == "_"){
			counter++;
		}
	}
	if(counter == 0){
		return 1;
	}else{
		return 0;
	}
}
