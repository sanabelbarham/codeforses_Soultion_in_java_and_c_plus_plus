import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public  class Main {

    public static void main(String[] arg) {

        long n;
        Scanner sn = new Scanner(System.in);
        n = sn.nextLong();//2013
        long answer = 0, i = n;
        i++;
        while (answer == 0) {

            String test = Long.toString(i);
            Map<Character, Long> map = new HashMap<>();
            for (char j : test.toCharArray()) {
                if (map.containsKey(j)) {
                    answer=0;
                    break;
                }
                else {
                    map.put(j, i);
                    answer = map.get(j);
                }

            }

            i++;
        }
        System.out.println(answer);
    }
}

