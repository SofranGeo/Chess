
public class noPiece extends Piece{
	private int team;
	private Position curentPosition;
	private char name;
	
	
	
	public noPiece(int team, Position curentPosition, char name) {
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
		
		return 0;
	}
	

}
