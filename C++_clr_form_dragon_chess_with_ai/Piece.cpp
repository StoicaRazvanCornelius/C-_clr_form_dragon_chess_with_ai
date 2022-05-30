
#include "pch.h"
#include "Piece.h"

Piece::Piece(color pieceColor)
{
	this->pieceColor = pieceColor;
}

color Piece::getColor()
{
	return pieceColor;
}
