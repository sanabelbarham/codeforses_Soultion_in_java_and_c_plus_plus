import java.util.*;
public  class Main {
    public static void main(String[] arg) {
        Scanner sn = new Scanner(System.in);
        Map<Integer,Integer>map=new HashMap<>();
        int n;
        for(int i=1;i<=4;i++)
        {
            n=sn.nextInt();
            map.put(i,n);
        }
        String s;
        sn.nextLine();
        s=sn.nextLine();
        int sum=0,value;
        for (char i:s.toCharArray())
        {
            value=i-'0';
            sum+=(map.get(value));
        }
        System.out.println(sum);



    }
}
