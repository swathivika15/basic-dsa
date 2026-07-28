import java.util.Scanner;
public class ReverseDigits {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,rev=0;
        System.out.print("Enter a number to reverse the digits: ");
        n=sc.nextInt();
        while(n!=0){
            int dig=n%10;
            rev=rev*10+dig;
            n/=10;
        }
        System.out.println("Reversed number: " + rev);
    }
}
