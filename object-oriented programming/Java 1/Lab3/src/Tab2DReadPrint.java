import java.util.Scanner;

public class Tab2DReadPrint {
    Scanner scanner = new Scanner(System.in);
    public void readTab2D(int[][] tab){
        System.out.println("Wczytywanie tablicy dwuwymiarowej o dlugosci"+ tab.length);
        for(int i=0;i<tab.length;i++){
            for(int j=0;j<tab[i].length;j++){
                System.out.printf("Podaj tab[%d][%d]: ",i,j);
                while(!scanner.hasNextInt()){
                    System.out.println("Nieprawidlowa liczba, podaj ponownie: ");
                    scanner.next();
                }
                tab[i][j] = scanner.nextInt();
            }
        }
    }
    public void printTab2D(int[][] tab){
        System.out.println("Drukowanie tablicy 2D");
        for (int[] ints : tab) {
            System.out.println();
            for (int anInt : ints) {
                System.out.printf(" %d ", anInt);
            }
        }
    }
    public void transpose2D(int[][] tab){
        int temp;
        for(int i=0;i<tab.length;i++){
            for(int j=0;j<tab[i].length;j++){
                if(i>j){
                temp = tab[i][j];
                tab[i][j] = tab[j][i];
                tab[j][i] = temp;
                }
            }
        }
    }
}
