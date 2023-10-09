import java.util.*;

public class Main {

    public static void main(String[] arg) {

        Map<Character, Integer> map = new HashMap<>();
        Scanner sn = new Scanner(System.in);
        String s, m, total;
        s = sn.nextLine();
        m = sn.nextLine();
        total = sn.nextLine();

        for (char c : m.toCharArray())
            map.put(c, map.getOrDefault(c, 0) + 1);

        for (char c : s.toCharArray())
            map.put(c, map.getOrDefault(c, 0) + 1);

        for (char c : total.toCharArray()) {
            int count = map.getOrDefault(c, 0);
            if (count == 0) {
                System.out.println("NO");
                return;
            }
            map.put(c, count - 1);
        }

        for (int count : map.values()) {
            if (count != 0) {
                System.out.println("NO");
                return;
            }
        }

        System.out.println("YES");
    }
}