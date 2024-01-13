public class Lab3Zad3 {
    public static void main(String[] args) {
        int[][] y = new int[3][3];
        Tab2DReadPrint tablica2D = new Tab2DReadPrint();
        tablica2D.readTab2D(y);
        tablica2D.printTab2D(y);
        tablica2D.transpose2D(y);
        tablica2D.printTab2D(y);
    }
}
