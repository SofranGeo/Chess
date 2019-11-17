#pragma once
#include<math.h>

struct Casuta {
	int x, y;
};

class Piece
{
protected:
	char name;
	Casuta poz;
	bool color;
public:
	virtual bool isValidMove();
	virtual void move();
	void move(Casuta move)
	{
		this->poz = move;
	}
};

class Pawn : public Piece {
public:
	Pawn(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
	Casuta getPoz() {
		return this->poz;
	}
	bool isValidMove(Casuta move, Piece *table) {
		if (move.x >= 0 && move.x < 8 && move.y >= 0 && move.y < 8)
		{
			switch (this->color)
			{
			case 0: {
				if (this->poz.x == 6)
				{
					if (move.x - this->poz.x == -1) {
						if (move.y == this->poz.y && table + move.x * 7 + move.y == nullptr)
							return 1;
						else
							return 0;
						if (abs(move.y - this->poz.y) == 1 && table + move.x * 7 + move.y != nullptr)
							return 1;
						else
							return 0;
						
					}
					if (move.x - this->poz.x == -2) {
						if (move.y == this->poz.y && table + (move.x - 1) * 7 + move.y == nullptr)
						{
							if (move.y == this->poz.y && table + move.x * 7 + move.y == nullptr)
								return 1;
							else
								return 0;
						}
						else 
							return 0;
					}
					
					return 0;
				}
				else
				{
					if (move.x - this->poz.x == -1) {
						if (move.y == this->poz.y && table + move.x*7 + move.y == nullptr)
							return 1;
						else
							return 0;
						if (abs(move.y - this->poz.y) == 1 && table + move.x * 7 + move.y != nullptr)
							return 1;
						else 
							return 0;
						
					}
					return 0;
				}

				// To Do : El Pasant
				
				break;
			}
			case 1: {
				if (this->poz.x== 1)
				{
					if (move.x - this->poz.x == 1) {
						if (move.y == this->poz.y && table + move.x * 7 + move.y == nullptr)
							return 1;
						else
							return 0;
						if (abs(move.y - this->poz.y) == 1 && table + move.x * 7 + move.y != nullptr)
							return 1;
						else
							return 0;

					}
					if (move.x - this->poz.x == 2) {
						if (move.y == this->poz.y && table + (move.x - 1) * 7 + move.y == nullptr)
						{
							if (move.y == this->poz.y && table + move.x * 7 + move.y == nullptr)
								return 1;
							else
								return 0;
						}
						else
							return 0;
					}

					return 0;
				}
				else
				{
					if (move.x - this->poz.x == 1) {
						if (move.y == this->poz.y && table + move.x * 7 + move.y == nullptr)
							return 1;
						else
							return 0;
						if (abs(move.y - this->poz.y) == 1 && table + move.x * 7 + move.y != nullptr)
							return 1;
						else
							return 0;

					}
					return 0;
				}
				// To Do : El Pasant
				break;
			}
			default:
				break;
			}
		}
		else
			return 0;
	}

};

class Bishop : public Piece {
public:
	Bishop(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class Rook : public Piece {
public:
	Rook(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class King : public Piece {
public:
	King(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class Queen : public Piece {
public:
	Queen(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class Knight : public Piece {
public:
	Knight(char name, int x, int y, bool color) {
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

