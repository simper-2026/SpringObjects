#pragma once

#include "Piece.h"
#include <vector>
#include "King.h"
#include <string>

class Board 
{
private:
	// turn count
	// who's turn

	std::vector<Piece*> pieces;

public :
	Board();

	bool Move(Position start, Position end);

	std::string ToString();

};

