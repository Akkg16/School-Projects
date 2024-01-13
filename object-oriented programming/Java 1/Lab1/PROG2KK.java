import java.util.Arrays;
import java.util.Random;

public class PROG2KK{
    public static void main(String[] args) {
        int n = 20454%3+5;
        Random random = new Random();
        int[] tabKK = new int[n];
        tabKK = Arrays.copyOf(tabKK, n*2);
        for (int i=n;i<2*n;i++) {
            tabKK[i] = random.nextInt(1,20);
        }
        Arrays.sort(tabKK);
        for(int i = 0;i<2*n;i++){
            System.out.println(tabKK[i]);
        }
        System.out.println("Odwrocona tablica");
        tabKK = inverseElementsKK(tabKK);
        for(int i = 0;i<2*n;i++){
            System.out.println(tabKK[i]);
        }
        }


    static int[] inverseElementsKK(int[] tab){
        int[] tabNEW = new int[tab.length];
        for(int i=0;i<tab.length;i++){
            tabNEW[tab.length-i-1] = tab[i];
        }
        return tabNEW;
    }
}