#include "Board.h"

Board::Board()
{
	King * wKing = new King(Color::White);
	King * bKing = new King(Color::Black);

	pieces.push_back(wKing);
	pieces.push_back(bKing);
}

bool Board::Move(Position start, Position end)
{

	return false;
}

std::string Board::ToString()
{
	std::string retval;

	for (int r = 9; r > 0; r--)
	{
		if (r == 9) {
			retval += "  ";
		}
		else {
			retval += std::to_string(r) + " ";
		}
		for (char f = 'a'; f <= 'h'; f++) 
		{
			if (r == 9) {
				retval += f;
				retval += ' ';
			}
			else {
				bool found = false;
				for(auto p : pieces)
				{	
					auto l = p->GetLocation();
					if (l.Rank == r && l.File == f) {
						retval += "k";
						found = true;
					}
				}
				if (!found)
					retval += " ";
				retval += " ";
			}
		}
		retval += '\n';
	}
	return retval;
}
