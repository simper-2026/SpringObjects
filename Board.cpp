#include "Board.h"

Board::Board()
{
	pieces = {
		new King(Color::White),
		new King(Color::Black),
		new Queen(Color::White),
		new Queen(Color::Black),
	};


}

bool Board::Move(Position start, Position end)
{
	Piece* pieceToMove = nullptr;

	for (size_t i = 0; i < pieces.size(); i++)
	{
		auto currentLocation = pieces[i]->GetLocation();
		if (currentLocation.File == start.File &&
			currentLocation.Rank == start.Rank) 
		{
			pieceToMove = pieces[i];
		}
	}
	if (pieceToMove == nullptr)
		return false;

	return pieceToMove->Move(end);
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
				continue;
			}

			bool found = false;
			for (auto p : pieces)
			{
				auto l = p->GetLocation();
				if (l.Rank == r && l.File == f) {
					retval += p->ToString();
					found = true;
				}
			}
			if (!found)
				retval += " ";
			retval += " ";

		}
		retval += '\n';
	}
	return retval;
}
