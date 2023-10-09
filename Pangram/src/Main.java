import java.util.*;

public  class Main {

    public static void main(String[] arg) {
        int n,c=0;
        Map<Character,Integer>map=new HashMap<>();
        String s;
        Scanner sn=new Scanner(System.in);
        n=sn.nextInt();
        sn.nextLine();
        s=sn.nextLine();
        s=s.toLowerCase();
        char []array=s.toCharArray();
        if(n<26) {
            System.out.println("NO");
            return;
        }
        else
        {
            for(int i=0;i<array.length;i++)
            {
                if(!map.containsKey(array[i]))
                {
                    c++;
                    map.put(array[i],i);
                }

            }
        }
        if(c==26)
            System.out.println("YES");
        else System.out.println("NO");



    }}

