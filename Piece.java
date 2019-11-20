
public abstract class Piece {
	
	private int team;
	private Position curentPosition;
	private char name;
	
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

	public abstract int isValidMove(Position futurePosition, Table table);
	
	public abstract void move(Position futurePosition, Table table);
	
}
