public class Table {
	private Piece[][] dimensions = new Piece[8][8];
	public void init() {

		dimensions[6][0] = new Pawn('p', 6, 0, 0);
		dimensions[6][1] = new Pawn('p', 6, 1, 0);
		dimensions[6][2] = new Pawn('p', 6, 2, 0);
		dimensions[6][3] = new Pawn('p', 6, 3, 0);
		dimensions[6][4] = new Pawn('p', 6, 4, 0);
		dimensions[6][5] = new Pawn('p', 6, 5, 0);
		dimensions[6][6] = new Pawn('p', 6, 6, 0);
		dimensions[6][7] = new Pawn('p', 6, 7, 0);

		dimensions[7][0] = new Rook('r', 7, 0, 0);
		dimensions[7][1] = new Knight('n', 7, 1, 0);
		dimensions[7][2] = new Bishop('b', 7, 2, 0);
		dimensions[7][3] = new Queen('q', 7, 3, 0);
		dimensions[7][4] = new King('k', 7, 4, 0);
		dimensions[7][5] = new Bishop('b', 7, 5, 0);
		dimensions[7][6] = new Knight('n', 7, 6, 0);
		dimensions[7][7] = new Rook('r', 7, 7, 0);

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
}
