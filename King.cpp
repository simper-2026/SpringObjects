#include "King.h"

King::King(Color c) : Piece(c) {
	//TODO: Add freestyle nonsense later

	if (c == Color::White) {
		_location = { 'e', 1 };

	}
	else if (c == Color::Black) {
		_location = { 'e', 8 };

	}
}

bool King::Move(Position target)
{
	return false;
}
