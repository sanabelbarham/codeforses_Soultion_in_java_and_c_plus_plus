import java.util.Scanner;

public class Main {
    static int answer=0;
    public static void main(String[] arg) {
        int n,a,b;
        int enters=0,exit=enters,min=0;
        Scanner sn=new Scanner(System.in);
        n=sn.nextInt();
        for(int i=0;i<n;i++)
        {
            a=sn.nextInt();
            b=sn.nextInt();//exit

            // exit=enters;
            min-=a;
            int test=min;
            enters=(min+b);
            min=enters;

            if(answer==0)
                answer=min;
            else
            {
                if(min>answer)
                    answer=min;
            }



        }
        System.out.println(answer);
    }
}
