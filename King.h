#pragma once
#include "Piece.h"

class King : public Piece
{
private:
	
protected:

public:
	King(Color c);
	virtual bool Move(Position target);
};

