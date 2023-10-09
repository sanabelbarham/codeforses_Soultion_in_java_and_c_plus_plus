import javax.swing.*;
import java.util.*;
public class Main {
    public static void main(String[]arg)
    {

        Map <Character,Integer>map=new HashMap<>();
        String s="";
        Scanner sn=new Scanner(System.in);
        s=sn.nextLine();
        int c=0;
        char sa[]=s.toCharArray();
        for(int i=0;i<sa.length;i++)
        {
            if(map.isEmpty())
            {
                map.put(sa[i],i);
                c++;
            }
            else
            {
                if(!map.containsKey(sa[i]))
                {
                    map.put(sa[i],i);
                    c++;
                }
            }
        }
        if(c%2==0)
        {
            System.out.println(   "CHAT WITH HER!" );
        }
        else

            System.out.println(       "IGNORE HIM!"  );

    }
}

