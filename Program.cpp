
#include <iostream>
#include <string>
#include <vector>

#include "Piece.h"
#include "King.h"
#include "Color.h"
#include "Position.h"
#include "Board.h"

using namespace std;


void Move(Piece* p) {
	Position pos = { 'e',2 };
	cout << p->Move(pos);
}


void DevTests();
void PlayGame();


int main() {
	DevTests();
	PlayGame();
}

void PlayGame() {
	Board b;
	cout << b.ToString();
	// TODO: Tell whos turn
	cout << "Where do you want to move? (e1 e2)";
	string input;
	getline(cin, input);
	Position start = { input[0], input[1] - '0'};
	Position end = { input[3], input[4] - '0'};
	b.Move(start, end);
	cout << b.ToString();
}

void DevTests()
{

	Board b;

	//cout << b.ToString();

	Position q1 = { 'e', 1 };
	Position q2 = { 'e', 2 };

	bool didMove = b.Move(q1, q1);

	if (didMove) {
		cout << "This should be 0 = " << didMove << endl;
		cout << "It's not valid for the king to stay on the same spot\n";
		cout << "FAIL\n";
		return;
	}

	b.Move(q1, q2);
	//cout << b.ToString();
	

	bool whitKingTwice = b.Move(q2, {'f', 3});
	if (whitKingTwice) {
		cout << "FAIL\n";
		cout << "White can't move twice in a row\n";
		return;
	}



}

