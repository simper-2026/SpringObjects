#pragma once

#include "Position.h"
#include "Color.h"

class Piece
{
private:
	Color _color;

protected:
	Position _location;

	Piece(Color c);

public:
	Position GetLocation();
	virtual bool Move(Position target) = 0;

};

