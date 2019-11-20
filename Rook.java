
public class Rook extends Piece{

	private int team;
	private Position curentPosition;
	private char name;
	
	
	
	public Rook(int team, Position curentPosition, char name) {
		super();
		this.team = team;
		this.curentPosition = curentPosition;
		this.name = name;
	}



	public int getTeam() {
		return team;
	}



	public void setTeam(int team) {
		this.team = team;
	}



	public Position getCurentPosition() {
		return curentPosition;
	}



	public void setCurentPosition(Position curentPosition) {
		this.curentPosition = curentPosition;
	}



	public char getName() {
		return name;
	}



	public void setName(char name) {
		this.name = name;
	}



	@Override
	public int isValidMove(Position futurePosition, Table table) {
		// TODO Auto-generated method stub
		return 1;
	}

	public void move(Position futurePosition, Table table) {
		if(table.getPiece(curentPosition).isValidMove(futurePosition, table)==1)
			table.setPiece(curentPosition, futurePosition);
		else
			System.out.println("can not move the piece");
	}
}
