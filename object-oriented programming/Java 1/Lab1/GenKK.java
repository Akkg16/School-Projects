import java.util.Random;

public class GenKK {

    public static void main(String[] args) {
        double suma;
        int n=20454%3+3;
        int m=20454%5+3;
        double[][] tabKK;
        Object[] wynik = genarrayKK(n,m);
        tabKK = (double[][]) wynik[0];
        suma = (double) wynik[1];
        for(int i=0;i<n;i++){
            System.out.println();
            for(int j=0;j<m;j++){
                System.out.printf(" %f, ",tabKK[i][j]);
            }
        }
        System.out.println("\n");
        System.out.println(suma);

    }
    static Object[] genarrayKK(int n, int m){
        Random random = new Random();
        double suma = 0;
        double[][] tabKK = new double[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                tabKK[i][j] = random.nextDouble(1.99+n);
            }
        }
        for(int i=0;i<n;i++){
            suma = suma + tabKK[i][0];
        }
        return new Object[]{tabKK,suma};
    }
}
