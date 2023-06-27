import java.util.Scanner;

public class remove_duplicates {
    public static void main(String[] args) {
        System.out.println("Enter number of elements in array:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements:");
        input_arr(arr, n);
        int count = r_duplicates(arr);
        System.out.println("number of unique elements are: "+count);
        print_arr(arr);
        sc.close();
    }
    public static void input_arr(int[] arr,int n) {
        Scanner sc = new Scanner(System.in);
        for (int i=0; i<n; i++) {
            int input = sc.nextInt();
            arr[i] = input;
        }
        sc.close();
    }

    public static int r_duplicates(int[]arr) {
        int i=0,j=0,count=1;
        arr[j] = arr[i];
        while(i<arr.length) {
            if (arr[i]!=arr[j]) {
                arr[++j] = arr[i];
                count++;
            }
            i++;
        }
        return count;
    }

    public static void print_arr(int[] arr) {
        for (int x:arr) {
            System.out.print(x+" ");
        }
    }
}
