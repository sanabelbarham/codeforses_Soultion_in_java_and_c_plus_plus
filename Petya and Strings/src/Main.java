import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sn=new Scanner(System.in);
        String s=sn.nextLine();
        String s2=sn.nextLine();
        String lowerCase2=s.toLowerCase();
        String lowerCase = s2.toLowerCase();

        if(lowerCase2.compareTo(lowerCase) ==0)
            System.out.println("0");
        else if(lowerCase2.compareTo(lowerCase)>0)
            System.out.println("1");
        else
            System.out.println("-1");


    }
}