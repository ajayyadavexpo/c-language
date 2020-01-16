import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("How many name you want to Enter : ");
        int n = input.nextInt();
        String[] name= new String[n];
        System.out.println("Enter names : ");
        for(int i =0;i<n;i++){
            name[i] = input.nextLine();
        }
        System.out.println("You Entered : ");
        for (int i=0;i<name.length ;i++ ){
            System.out.println(name[i]);
        } 
    }
}