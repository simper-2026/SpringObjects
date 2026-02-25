
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


//cin.ignore()

int main() {

	Board b;

	cout << b.ToString();

}

