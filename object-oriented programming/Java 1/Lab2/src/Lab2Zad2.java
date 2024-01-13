import java.util.Random;

public class Lab2Zad2 {
    static public void main(String[] Args){
        Random random = new Random();
        System.out.println("5 Liczb losowych typu int");
        for(int i=0;i<5;i++){
            System.out.println(random.nextInt());
        }
        System.out.println("10 Liczb losowych typu float");
        for(int i=0;i<10;i++){
            System.out.println(random.nextFloat());
        }
        System.out.println("12 Liczb losowych typu int z zakresu [0,n)");
        int n = 10;
        for(int i=0;i<12;i++){
            System.out.println(random.nextInt(n));
        }
        System.out.println("15 Liczb losowych typu int z zakresu [-10,20]");
        int y = 20, x = -10;
        for(int i=0;i<15;i++){
            System.out.println(random.nextInt(y-x)+x);
        }
        System.out.println("15 Liczb losowych typu int z zakresu [-10,20]");
    }
}
