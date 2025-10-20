#include "chess.hpp"
#include<iostream>
int main() {
	Chess c;
	std::vector<std::vector<Qizi>> c_vec=c.getboard();
	for (int i = 0;i < BOARD_SIZE;i++) {
		for (int j = 0;j < BOARD_SIZE;j++) {
			std::cout<<c_vec[i][j].now_;
		}
		std::cout << '\n';
	}
	return 0;
}