import java.util.*;
public  class Main {
    public static void main(String[] arg) {
        Scanner sn = new Scanner(System.in);
        int t;
        String c;
        t = sn.nextInt();
        Map<String, Integer> map = new HashMap<>();
        map.put("c",1);
        map.put("o",1);
        map.put("d",1);
        map.put("e",1);
        map.put("f",1);
        map.put("r",1);
        map.put("s",1);
        sn.nextLine();

        for (int i = 0; i < t; i++) {

            c=sn.nextLine();
            if(map.containsKey(c))
                System.out.println("YES");
            else
                System.out.println("NO");


        }
    }
}