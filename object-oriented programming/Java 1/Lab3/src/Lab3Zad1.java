import java.util.Scanner;

public class Lab3Zad1 {
    public static void main(String[] args) {
        int n = 5;
        double[] tab = new double[n];
        readTab1D(tab);
        printTab1D(tab);

    }
    public static void readTab1D(double[] tab){
        Scanner scanner = new Scanner(System.in);
        for(int i=0;i< tab.length;i++){
            System.out.println("Podaj tab["+i+"]");
            while(!scanner.hasNextDouble()){
                System.out.println("Podaj prawidlowa liczbe: ");
                scanner.next();
            }
            tab[i] = scanner.nextDouble();
        }
    }
    public static void printTab1D(double[] tab){
        for (double i : tab) {
            System.out.printf(" %f ", i);
        }
    }
}