import java.util.Scanner;

public class Lab2Zad3 {
    public static void main(String[] Args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Podaj a: ");
        while(!scanner.hasNextDouble()){
            System.out.println("Nieprawidlowy wspolczynnik a");
            System.out.println("Podaj a: ");
            scanner.next();
        }
        double a = scanner.nextDouble();
        System.out.println("Podaj b: ");
        while(!scanner.hasNextDouble()){
            System.out.println("Nieprawidlowy wspolczynnik a");
            System.out.println("Podaj b: ");
            scanner.next();
        }
        double b = scanner.nextDouble();
        System.out.println("Podaj c: ");
        while(!scanner.hasNextDouble()){
            System.out.println("Nieprawidlowy wspolczynnik c");
            System.out.println("Podaj c: ");
            scanner.next();
        }
        double c = scanner.nextDouble();

        if(a==0){
            if(b==0){
                System.out.println("Wspolczynniki a i b sa rowne zero, funckja nie ma pierwiastkow");
            }
            else{
                if(c==0){
                    System.out.println("Pierwiastek równania to 0");
                }
                else{
                    System.out.println("Wspolczynik a = 0, równanie liniowe");
                    double x1 = (-c)/b;
                    System.out.println("Pierwiastek tej funkcji to: "+x1);
                }

            }
            return;
        }

        double delta = Math.pow(b,2) - (4*a*c);
        System.out.println("Delta jest równa: "+delta);
        if(delta==0){
            System.out.println("Pierwiastek podwojne");
            double x1=-b/2*a;
            System.out.println("Pierwiastki x1 i x2 sa rowne: "+x1);
            sprawdzenie(a,b,c,x1,x1);
        }
        if(delta>0){
            double x1 = (-b + Math.sqrt(delta))/(2*a);
            double x2 = (-b - Math.sqrt(delta))/(2*a);
            System.out.println("Pierwiastek x1 = "+x1+" Pierwiastek x2 = "+x2);
            sprawdzenie(a,b,c,x1,x2);
        }
        if(delta<0){
            double czescRzeczywista = -b/(2*a);
            double czescUrojona = Math.sqrt(Math.abs(delta)) / (2*a);
            System.out.println("Pierwiastki sa zespolone");
            System.out.println("x1 = " +czescRzeczywista + " + " + czescUrojona +" i");
            System.out.println("x2 = " +czescRzeczywista + " - " + czescUrojona +" i");
        }

    }
    public static void sprawdzenie(double a, double b, double c, double x1, double x2){
        System.out.println("Sprawdzenie poprawnosci rownania");
        double wynik1 = a*Math.pow(x1,2) + b*x1 + c;
        double wynik2 = a*Math.pow(x2,2) + b*x2 + c;
        System.out.println("Pierwiastek x1 daje wynik: "+wynik1+" Pierwiastek x2 daje wynik: "+wynik2);

    }
}
