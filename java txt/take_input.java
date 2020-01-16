import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your Name : ");
        
        String name = "";
        name = input.nextLine();
        System.out.println("Enter Your Age : ");
        int age = input.nextInt();
        
        System.out.println("Hello "+name+" your age is : "+age);
    }
}