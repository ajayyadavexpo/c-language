import java.util.Scanner;
public class Main{
    static int sum(int x,int y){
        return x+y;
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("A : ");
        int a = input.nextInt();
        System.out.println("B : ");
        int b = input.nextInt();
        int c = sum(a,b);
        System.out.println("Sum is : "+c);
    }
}