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

	virtual bool isValid();
	virtual void move();
	virtual Casuta getPoz();

};

class Pawn : public Piece
{
public:
	Pawn(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}

};

class Bishop : public Piece
{
	Bishop(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}

};

class Rook : public Piece
{
	Rook(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class King : public Piece
{
	King(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}

};

class Queen : public Piece
{
	Queen(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}
};

class Knight : public Piece
{
	Knight(char name, int x, int y, bool color)
	{
		this->name = name;
		this->poz.x = x;
		this->poz.y = y;
		this->color = color;
	}

};
