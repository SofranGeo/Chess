#pragma once
class Table
{
	Piece* dimensions[8][8];
public:
	void init()
	{
		for (int i = 0; i < 8; i++)
			for (int j = 0; i < 8; j++)
				dimensions[i][j] = nullptr;

				dimensions[0][0] = new Rook('r',0,0,0);
		dimensions[6][0] = new Pawn;
		dimensions[6][1] = new Pawn;
		dimensions[6][2] = new Pawn;
		dimensions[6][3] = new Pawn;
		dimensions[6][4] = new Pawn;
		dimensions[6][5] = new Pawn;
		dimensions[6][6] = new Pawn;
		dimensions[6][7] = new Pawn;

		dimensions[7][0] = new Rook;
		dimensions[7][1] = new Knight;
		dimensions[7][2] = new Bishop;
		dimensions[7][3] = new Queen;
		dimensions[7][4] = new King;
		dimensions[7][5] = new Bishop;
		dimensions[7][6] = new Knight;
		dimensions[7][7] = new Rook;

		dimensions[1][0] = new Pawn('P', 1, 0, 1);
		dimensions[1][1] = new Pawn('P', 1, 1, 1);
		dimensions[1][2] = new Pawn('P', 1, 2, 1);
		dimensions[1][3] = new Pawn('P', 1, 3, 1);
		dimensions[1][4] = new Pawn('P', 1, 4, 1);
		dimensions[1][5] = new Pawn('P', 1, 5, 1);
		dimensions[1][6] = new Pawn('P', 1, 6, 1);
		dimensions[1][7] = new Pawn('P', 1, 7, 1);

		dimensions[0][0] = new Rook('R', 0, 0, 1);
		dimensions[0][1] = new Knight('N', 0, 1, 1);
		dimensions[0][2] = new Bishop('B', 0, 2, 1);
		dimensions[0][3] = new Queen('Q', 0, 3, 1);
		dimensions[0][4] = new King('K', 0, 4, 1);
		dimensions[0][5] = new Bishop('B', 0, 5, 1);
		dimensions[0][6] = new Knight('N', 0, 6, 1);
		dimensions[0][7] = new Rook('R', 0, 7, 1);
	}

	void print()
	{

	}
};
