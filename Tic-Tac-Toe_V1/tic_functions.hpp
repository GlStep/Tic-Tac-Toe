#include <string>
#include <vector>
#include <iostream>

void tictactoe_welcome();
std::vector<std::string> play_field(std::vector<std::string> field);
void current_field(std::vector<std::string> field);
int data_player1_row();
int data_player1_column();
int data_player2_row();
int data_player2_column();
int convert_position(int row, int column);
std::vector<std::string> current_play_field(std::vector<std::string> field_vector, int converted_position, std::string player_symbol);
int win_check_X(std::vector<std::string> field_vector);
int win_check_O(std::vector<std::string> field_vector);
int check_space(std::vector<std::string> field_vector, int field);
int draw_detection(std::vector<std::string> field_vector);
