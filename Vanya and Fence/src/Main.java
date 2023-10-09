import java.util.Scanner;

public class Main {

    public static void main(String[] arg) {
        int n,h;
        Scanner sn=new Scanner(System.in);
        n=sn.nextInt();
        h=sn.nextInt();
        int c=0;
        int []arr=new int [n];


        for(int i=0;i<n;i++)
        {
            arr[i]=sn.nextInt();
            if(arr[i]>h) c+=2;
            else c++;
        }
        System.out.println(c);

    }
}
