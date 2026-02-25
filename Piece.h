#pragma once

#include "Position.h"
#include "Color.h"

class Piece
{
private:

protected:
	Color _color;
	Position _location;

	//Piece(Color c);

public:
	Position GetLocation();
	virtual bool Move(Position target) = 0;

};

