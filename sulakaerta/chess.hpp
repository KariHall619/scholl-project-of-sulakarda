#pragma once
#include<vector>
#include<cstdlib>

#define BOARD_SIZE 6

enum Play
{
	BLACK,
	WHITE,
	EMPTY
};
struct Qizi {
	Play now_;
	bool isyellow_, isblue_, isgreen_;
	//bool isblue_hu_,isgreen_hu;
	//LineNode* yellow_line_, * blue_line_, * green_line_;
};//����
class Chess {
	//struct LineNode {
	//	LineNode* up_, * down_, * left_, * right_;
	//	LineNode() :up_(nullptr), down_(nullptr), left_(nullptr), right_(nullptr) {}
	//};//��ɫ��
	
	std::vector<std::vector<Qizi>> board_;//����
	struct Onum {
		int num_play[2];//0Ϊblack,1Ϊwhite
	} blue_O_[4],green_O_[4];
	int black_total_num_, white_total_num_;

public:
	Chess();
	std::vector<std::vector<Qizi>>& getboard();
	bool in_board(int now_row,int now_col,int new_row,int new_col);


	int in_blue_O(int now_row, int now_col);
	int in_green_O(int now_row, int now_col);
	void init();
	void move(int now_row, int now_col, int new_row, int new_col,Play now_play);
	bool eat_blue(int now_row, int now_col, int new_row, int new_col, Play now_play);
	bool eat_green(int now_row, int now_col, int new_row, int new_col, Play now_play);
	void move_u(int now_row, int now_col, int new_row, int new_col, Play now_play);
	bool black_checkwin();
	bool white_checkwin();

	void setboard(const Chess& c);
};