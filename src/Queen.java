
public class Queen extends Piece{

	private int team;
	private Position curentPosition;
	private char name;
	
	
	
	public Queen(int team, Position curentPosition, char name) {
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
		return 0;
	}
	
	
	
}
