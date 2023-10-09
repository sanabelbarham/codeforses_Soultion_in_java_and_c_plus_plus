import java.util.*;

public  class Main {

    public static void main(String[] arg) {
        int c=0;
        Map<Character,Integer>map=new HashMap<>();
        String s;
        Scanner sn=new Scanner(System.in);
        s=sn.nextLine();

        char []array=s.toCharArray();
        for(int i=0;i<array.length;i++)
        {
            if(map.isEmpty()) {
                map.put(array[i], i);
                map.put('}', array.length+1);

            }

            else {
                if((!map.containsKey(array[i]))&&(array[i]!=',')&&(array[i]!=' ') )
                {   c++;
                    map.put(array[i],i);


                }
            }




        }
        System.out.println(c);
    }}

