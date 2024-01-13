import java.util.Scanner;

public class Lab2Zad1{
    public static void main(String[] Args){
        System.out.println("Podaj zmienna x: ");
        Scanner scanner = new Scanner(System.in);
        while(!scanner.hasNextInt()){
            System.out.println("Nieprawidłowa zmienna");
            System.out.println("Podaj zmienna x: ");
            scanner.next();
        }
        int x = scanner.nextInt();
        int licznik = (int) (Math.log(x-1)/Math.log(2) + Math.cbrt(1/Math.tan(x)) + Math.ceil(Math.pow(3,x)) + Math.exp(Math.pow(x,3)));
        int mianownik = (int) (Math.tan(x) + Math.log(Math.abs(Math.sin(x))) + Math.pow(Math.PI,x));
        int y = licznik/mianownik;
        System.out.println("Y jest równe: " + y);

    }
}