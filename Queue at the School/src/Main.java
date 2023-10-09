import javax.swing.*;
import java.util.*;
public class Main {
    public static void main(String[] arg) {
        int n, t;
        String s;
        Scanner sn = new Scanner(System.in);
        n = sn.nextInt();
        t = sn.nextInt();
        sn.nextLine();
        s = sn.nextLine();
        char[] arr = s.toCharArray();


        for (int i = 0; i < t; i++) {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]=='B'&& arr[j+1]=='G')
                {
                    char temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    j++;
                }


            }
        }
        System.out.println(new String(arr));
    }


}
