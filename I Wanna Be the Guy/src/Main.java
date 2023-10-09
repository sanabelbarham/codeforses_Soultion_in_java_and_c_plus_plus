import java.util.*;

public  class Main {

    public static void main(String[] arg) {

        Scanner sn=new Scanner(System.in);
        int n,p,q,c=0,num;
        n=sn.nextInt();


        Set <Integer>x=new HashSet<>();
        Set <Integer>y=new HashSet<>();
        p=sn.nextInt();
        for(int i=0;i<p;i++)
        {
            num=sn.nextInt();
            x.add(num);
        }
        q=sn.nextInt();
        for(int i=0;i<q;i++)
        {
            num=sn.nextInt();
            y.add(num);
        }
        Set <Integer>compained=new HashSet<>(x);
        compained.addAll(y);

        Set <Integer>test=new HashSet<>();

        for(int i=1;i<=n;i++)
        {
            test.add(i);
        }
        if(compained.equals(test))
            System.out.println("I become the guy.");
        else

            System.out.println("Oh, my keyboard!");


    }}

