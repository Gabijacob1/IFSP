import java.util.Scanner;

public class OutputFormatting {

    public static <string> void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        double d = scan.nexdouble();
        string s = scan.nexString();



        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}