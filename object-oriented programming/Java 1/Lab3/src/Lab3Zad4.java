public class Lab3Zad4 {
    public static void main(String[] args) {
        Pierwsza obliczenia = new Pierwsza();
        double test;
        test = obliczenia.Oblicz(3);
        System.out.println("Wynik to: "+test);
    }
}
class Pierwsza{
    private int silinia(int n){
        int wynik = 1;
        for(int i=1;i<=n;i++) {
            wynik = wynik * i;
        }
        return wynik;
    }
    public double Oblicz(int n){
        System.out.println("Obliczanie sumy odwrotnosci silni");
        double suma = 0;
        for(int i=1;i<=n;i++){
            suma = suma + (double) 1/silinia(i);
        }
        return suma;
    }
}
