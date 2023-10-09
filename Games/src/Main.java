import java.util.*;

public  class Main {

    public static void main(String[] arg) {

        Scanner sn=new Scanner(System.in);
        int n,k,v,c=0,num;
        n=sn.nextInt();
        int []home=new int[n];
        int []gust=new int[n];
        for(int i=0;i<n;i++)
        {
            home[i]=sn.nextInt();
            gust[i]=sn.nextInt();

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i!=j)&&(home[i]==gust[j]))
                    c++;

            }
        }
        System.out.println(c);





    }}
