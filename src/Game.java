
public class Game {
	
	public static void main(String[] args) {
		Table table = new Table(new Piece[][] {
			{new Rook   (1,new Position(0,0),'R'), new Knight (1,new Position(0,1),'N'), new Bishop (1,new Position(0,2),'B'), new Queen  (1,new Position(0,3),'Q'), new King   (1,new Position(0,4),'K'), new Bishop (1,new Position(0,5),'B'), new Knight (1,new Position(0,6),'N'), new Rook   (1,new Position(0,7),'R')},
			{new Pawn   (1,new Position(1,0),'P'), new Pawn   (1,new Position(1,1),'P'), new Pawn   (1,new Position(1,2),'P'), new Pawn   (1,new Position(1,3),'P'), new Pawn   (1,new Position(1,4),'P'), new Pawn   (1,new Position(1,5),'P'), new Pawn   (1,new Position(1,6),'P'), new Pawn   (1,new Position(1,7),'P')},
			{new noPiece(2,new Position(2,0),' '), new noPiece(2,new Position(2,1),' '), new noPiece(2,new Position(2,2),' '), new noPiece(2,new Position(2,3),' '), new noPiece(2,new Position(2,4),' '), new noPiece(2,new Position(2,5),' '), new noPiece(2,new Position(2,6),' '), new noPiece(2,new Position(2,7),' ')},
			{new noPiece(2,new Position(3,0),' '), new noPiece(2,new Position(3,1),' '), new noPiece(2,new Position(3,2),' '), new noPiece(2,new Position(3,3),' '), new noPiece(2,new Position(3,4),' '), new noPiece(2,new Position(3,5),' '), new noPiece(2,new Position(3,6),' '), new noPiece(2,new Position(3,7),' ')},
			{new noPiece(2,new Position(4,0),' '), new noPiece(2,new Position(4,1),' '), new noPiece(2,new Position(4,2),' '), new noPiece(2,new Position(4,3),' '), new noPiece(2,new Position(4,4),' '), new noPiece(2,new Position(4,5),' '), new noPiece(2,new Position(4,6),' '), new noPiece(2,new Position(4,7),' ')},
			{new noPiece(2,new Position(5,0),' '), new noPiece(2,new Position(5,1),' '), new noPiece(2,new Position(5,2),' '), new noPiece(2,new Position(5,3),' '), new noPiece(2,new Position(5,4),' '), new noPiece(2,new Position(5,5),' '), new noPiece(2,new Position(5,6),' '), new noPiece(2,new Position(5,7),' ')},
			{new Pawn   (0,new Position(6,0),'p'), new Pawn   (0,new Position(6,1),'p'), new Pawn   (0,new Position(6,2),'p'), new Pawn   (0,new Position(6,3),'p'), new Pawn   (0,new Position(6,4),'p'), new Pawn   (0,new Position(6,5),'p'), new Pawn   (0,new Position(6,6),'p'), new Pawn   (0,new Position(6,7),'p')},
			{new Rook   (0,new Position(7,0),'r'), new Knight (0,new Position(7,1),'n'), new Bishop (0,new Position(7,2),'b'), new Queen  (0,new Position(7,3),'q'), new King   (0,new Position(7,4),'k'), new Bishop (0,new Position(7,5),'b'), new Knight (0,new Position(7,6),'n'), new Rook   (0,new Position(7,7),'r')},
		});
		
		System.out.println(table);
	}
}
