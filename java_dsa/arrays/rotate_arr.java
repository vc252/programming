//rotate an array by K elements

import java.util.Scanner;


public class rotate_arr {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements in array:");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the elements:");
        input_arr(arr, n, sc);

        System.out.println("enter no. of rotations");
        int k = sc.nextInt();

        shift(arr,k);

        print_arr(arr);

        sc.close();
    }

    public static void shift(int[] arr,int k) {
        reverse(arr, 0, k-1);
        reverse(arr, k, arr.length-1);
        reverse(arr, 0, arr.length-1);
    }

    public static void reverse(int[] arr,int start,int end) {
        while(start<end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    public static void input_arr(int[] arr,int n,Scanner sc) {

        for (int i=0; i<n; i++) {
            int input = sc.nextInt();
            arr[i] = input;
        }
    }

    public static void print_arr(int[] arr) {

        for (int x:arr) {
            System.out.print(x+" ");
        }

    }
}
