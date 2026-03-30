#include "Piece.h"

Position Piece::GetLocation()
{
    return _location;
}

Color Piece::GetColor()
{
    return _color;
}


//Piece::Piece(Color c)
//{
//    _color = c;
//    _location = { 'a', -1 };
//}
