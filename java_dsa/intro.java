import java.util.Scanner;

import javax.sound.midi.Soundbank;

class Animal 
{
    int age;
    String name;

    void eat() {
        System.out.println("eating");
    }
    void barking() {
        System.out.println("barking");
        eat();
    }
}
public class intro{
    public static void main(String[] args) {
        // System.out.println("enter number in decimal: ");
        // Scanner sc = new Scanner(System.in);
        // int num = sc.nextInt();
        // int binary_num = 0;
        // int pw=1;
        // while (num>0) {
        //     int x = num%2;
        //     num/=2;
        //     binary_num += pw*x;
        //     pw*=10;
        // }
        // System.out.println(binary_num);

        Animal lion = new Animal();
        lion.age = 10;
        lion.barking();
        pee();

        // String[] names = new String[5];
        // names[1] = "heloo";
        // System.out.println(names[1]);

        // Student[] data = new Student[5];
        // data[0].rno = 2210;
        // data[0].marks = 89f;
        // data[0].name = "vipul"; 
    }
    void l() {
        pee();
    }
    void pee() {
        System.out.println("pee");
    }

    class Student{
        int rno;
        String name;
        float marks;
    }
}