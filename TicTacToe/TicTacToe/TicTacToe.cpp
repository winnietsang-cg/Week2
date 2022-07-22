
#include <iostream>
#include <stdlib.h>

void g_DrawBoard(char a[9]);
int g_getInput();
char g_CheckForWinner(char a[9]);

int main()
{
	char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	//g_DrawBoard(board);

	char player = 'X';
	char winner = ' ';
	int input;

	bool running = true;
	while (running) {
		system("cls");
		g_DrawBoard(board);
		std::cout << '\n' << player << "'s turn...\n";
		//std::cout << "\n\n" << winner << "\n\n";
		input = g_getInput();
		//std::cout << input;

		if (input >= 1 && input <= 9 && board[input - 1] == ' ') {
			board[input-1] = player;
			if (player == 'X') player = 'O';
			else player = 'X';
		}
		else if (input < 0) {
			//std::cout << "Invalid input...\n";
			//std::cin.ignore('\n');
		}

		winner = g_CheckForWinner(board);
		if (winner == 'D') {
			system("cls");
			g_DrawBoard(board);
			std::cout << "\nDraw!\n";
			running = false;
		}
		else 
			if (winner != ' ') {
			system("cls");
			g_DrawBoard(board);
			std::cout << "\n" << winner << " wins!\n";
			running = false;
		}
		//std::cout << "\n\n" << winner << "\n\n";

		//break;
	}
}



void g_DrawBoard(char a[9]) {
	std::cout	<< a[6] << " | " << a[7] << " | " << a[8] << "  Input: 7   8   9\n---------\n"
				<< a[3] << " | " << a[4] << " | " << a[5] << "         4   5   6\n---------\n"
				<< a[0] << " | " << a[1] << " | " << a[2] << "         1   2   3\n";
}

int g_getInput() {
	int i;
	std::cin >> i;
	if (std::cin.fail()) {
		std::cin.clear();
		return -1;
	}
	else return (int)i;
}

char g_CheckForWinner(char a[9]) {
	char winner = ' ';
	// vv Could be more efficient vv
	if		(a[1] != ' ' && a[0] == a[1] && a[1] == a[2]) winner = a[1]; // rows
	else if (a[4] != ' ' && a[3] == a[4] && a[4] == a[5]) winner = a[4];
	else if (a[7] != ' ' && a[6] == a[7] && a[7] == a[8]) winner = a[7];
	else if (a[3] != ' ' && a[0] == a[3] && a[3] == a[6]) winner = a[3]; // columns
	else if (a[4] != ' ' && a[1] == a[4] && a[4] == a[7]) winner = a[4];
	else if (a[5] != ' ' && a[2] == a[5] && a[5] == a[8]) winner = a[5];
	else if (a[4] != ' ' && a[0] == a[4] && a[4] == a[8]) winner = a[4]; // diagonals
	else if (a[4] != ' ' && a[2] == a[4] && a[4] == a[6]) winner = a[4];
	else if (a[0] != ' ' && a[1] != ' ' && a[2] != ' ' &&
			 a[3] != ' ' && a[4] != ' ' && a[5] != ' ' &&
			 a[6] != ' ' && a[7] != ' ' && a[8] != ' ') winner = 'D';

	return winner;
}