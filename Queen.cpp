#include "Queen.h"

Queen::Queen(Color c)
{
	_color = c;

	if (c == Color::White) {
		_location = { 'd', 1 };

	}
	else if (c == Color::Black) {
		_location = { 'd', 8 };

	}
}

bool Queen::Move(Position target)
{
	if (_location.File != target.File) {
		return false;
	}
	_location = target;
    return true;
}

std::string Queen::ToString()
{
	return _color == Color::White ? "Q" : "q";
}
