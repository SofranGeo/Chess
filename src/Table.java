import java.util.Arrays;

public class Table {
	
	private Piece[][] table;

	
	public Table(Piece[][] table) {
		super();
		this.table = table;
	}

	public int getRows() {
		return table.length;
	}

	public int getCols() {
		return table[0].length;
	}
	
	public char getName(Piece piece) {
		return piece.getName();
	}
	
	public String toString() {
		String s="";
		for(int i=0; i<getRows(); i++) {
			for(int j=0; j<getCols(); j++)
				s += table[i][j].getName();
			s += "\n";
			}
		return s;
	}
	
}
