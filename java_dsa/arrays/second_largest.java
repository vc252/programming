//find the second largest number in an array
import java.util.Scanner;
import java.lang.Integer;


public class second_largest 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter number of elements in array:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements:");
        input_arr(arr, n);
        int s = s_largest(arr);
        if (s == Integer.MIN_VALUE) 
        {
            System.out.println("all elements are same");
        } else
        {
            System.out.print("The second largest number is: "+s);
        }
        sc.close();
    }
    public static void input_arr(int[] arr,int n) 
    {
        Scanner sc = new Scanner(System.in);
        for (int i=0; i<n; i++) 
        {
            int input = sc.nextInt();
            arr[i] = input;
        }
        sc.close();
    }
    public static int s_largest(int arr[]) 
    {
        int largest = arr[0];
        int s_largest = Integer.MIN_VALUE;
        for (int i=1; i<arr.length; i++) 
        {
            if (arr[i]>largest) 
            {
                int temp = largest;
                largest = arr[i];
                s_largest = temp;
            } else if(arr[i]>s_largest && arr[i]!=largest) {
                s_largest = arr[i];
            }
        }
        return s_largest;
    }
}
