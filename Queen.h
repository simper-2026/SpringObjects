#pragma once
#include "Piece.h"
#include <string>


class Queen : public Piece
{
private:

protected:

public:
	Queen(Color c);
	virtual bool Move(Position target);
	virtual std::string ToString();

};
