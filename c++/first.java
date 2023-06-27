import java.util.Scanner;

import java.lang.String;

public class first{
    public static void main(String[] args) {
        System.out.println("Enter principal, Rate and Time: ");
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] prt = input.split(" ");
        float interest = 1;
        for (String i:prt) {
            interest*=Float.valueOf(i);
        }
         System.out.println("Simple interest is: "+interest/100);
    }
}