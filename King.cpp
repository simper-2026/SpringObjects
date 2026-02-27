#include "King.h"
#include <cmath>
#include <string>

King::King(Color c) { //}: Piece(c) {
	//TODO: Add freestyle nonsense later
	_color = c;

	if (c == Color::White) {
		_location = { 'e', 1 };

	}
	else if (c == Color::Black) {
		_location = { 'e', 8 };

	}
}

bool King::Move(Position target)
{
	if (target.Rank > 8 || target.Rank < 1) {
		return false;
	}
	if (target.File > 'h' || target.File < 'a') {
		return false;
	}
	// if abs

	if (abs(_location.File - target.File) == 1)
	{
		if (abs(_location.Rank - target.Rank) == 1) 
		{
			_location = target;
			return true;
		}
	}



	return false;
}

std::string King::ToString() 
{
	return _color == Color::White ? "K" : "k";
}

