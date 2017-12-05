// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void displayBoard(char map[20][80]);		//declaring dungeon room one
//void displayHallwayOne(char hallwayOne[15][30]);		//declaring hallway one

class hero {
public:
	char player;
	int x;
	int y;
	hero();
};

hero::hero() {
	player = 'H';
	x = 1;
	y = 1;
}



int main()
{
	char map[20][80];
	hero position;
	char move;

	//writing map parts dungeon 1
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 80; j++) {
			if (i == 0 || i == 19 || j == 0 || j == 79) {
				dungeonOne[i][j] = char(178);
			}
			else if (i == position.x && j == position.y) {
				dungeonOne[i][j] = position.player;
			}

			else {
				dungeonOne[i][j] = ' ';
			}
		}
	}

	//moving on map

	while (true) {

		displayBoard(map);

		cout << "Enter WASD to move: ";
		cin >> move;

		if (move == 'w') {
			if dungeonOne[position.x - 1][position.y] != char(178) {
				dungeonOne[position.x][position.y] = ' ';
				dungeonOne[position.x - 1][position.y] = position.player;
				position.x--;
			}
		}
		if (move == 's') {
			if dungeonOne[position.x + 1][position.y] != char(178) {
				dungeonOne[position.x][position.y] = ' ';
				dungeonOne[position.x + 1][position.y] = position.player;
				position.x++;
			}
		}
		if (move == 'a') {
			if dungeonOne[position.x][position.y - 1] != char(178) {
				dungeonOne[position.x][position.y] = ' ';
				dungeonOne[position.x][position.y - 1] = position.player;
				position.y--;
			}
		}
		if (move == 'd') {
			if dungeonOne[position.x][position.y + 1] != char(178) {
				dungeonOne[position.x][position.y] = ' ';
				dungeonOne[position.x][position.y + 1] = position.player;
				position.y++;
			}
		}



	}


    return 0;
}


//displaying map parts
void displayBoard(char map[20][80]) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 80; j++) {

			cout << map[i][j];
		}
		cout << endl;
	}
}

//void displayHallwayOne(char hallwayOne[15][30]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			
			cout << hallwayOne[i][j];
		}
		cout << endl;
	}
//}
