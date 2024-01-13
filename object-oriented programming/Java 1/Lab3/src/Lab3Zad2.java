import java.util.Scanner;

public class Lab3Zad2 {
    public static void main(String[] args) {
        int n = 5;
        double[] tab = new double[n];
        readTab1D(tab);
        printTab1D(tab);
        double[] wyniki;
        wyniki = maxMin(tab);
        System.out.println("Max = "+wyniki[0]+" Min = "+wyniki[1]);
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
        System.out.println();
    }
    public static double[] maxMin(double[] tab){
        double[] wyniki = new double[2];
        wyniki[0] = tab[0];
        wyniki[1] = tab[0];
        for(double i : tab){
            if(i>wyniki[0]){
                wyniki[0] = i;
            }
            if(i<wyniki[1]){
                wyniki[1] = i;
            }

        }
        System.out.println("Max = wyniki[0], Min = wyniki[1]");
        return wyniki;
    }
}