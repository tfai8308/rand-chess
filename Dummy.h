#pragma once
#include "ChessPiece.h"

class Dummy : public ChessPiece {
public:
	Dummy(bool color);
	void CalculateLegalMoves(vector<vector<ChessPiece*>>& gridPieces, int activeRowIndex, int activeColIndex, int activePieceOriginalPositionX, int activePieceOriginalPositionY, vector<Log>& logs, vector<ChessPiece*>& whitePieces, vector<ChessPiece*>& blackPieces);
};

