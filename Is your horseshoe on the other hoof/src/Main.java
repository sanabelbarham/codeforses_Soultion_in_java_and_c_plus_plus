import java.util.*;

public  class Main {

    public static void main(String[] arg) {
        Map<Integer,Integer> map=new HashMap<>();
        Scanner sn=new Scanner(System.in);
        int c=0;
        int arr[]=new int[4];
        for(int i=0;i<4;i++)
        {
            int k=sn.nextInt();
            if(map.isEmpty())
            {
                map.put(k,i);
                c++;
            }
            else {
                if(!map.containsKey(k))


                {
                    map.put(k,i);
                    c++;
                }
            }



        }
        System.out.println(4-c);



    }
}

