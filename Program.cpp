
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



int main() {

	Board b;

	//cout << b.ToString();

	Position q1 = { 'e', 1 };
	Position q2 = { 'e', 2 };

	bool didMove = b.Move(q1, q1);

	cout << "This should be 0 = " << didMove << endl;

	b.Move(q1, q2);

	cout << b.ToString();
	
	b.Move(q2, {'f', 3});

	cout << b.ToString();

}

