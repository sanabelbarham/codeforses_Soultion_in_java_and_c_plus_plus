import java.util.Scanner;

public class Main {
    public static void main(String[] arg) {
        String s, t;
        Scanner sn = new Scanner(System.in);
        int c = 0;
        s = sn.nextLine();
        t = sn.nextLine();

        // Check if the lengths of s and t are equal
        if (s.length() != t.length()) {
            System.out.println("NO");
            return; // Exit the program early
        }

        // Compare characters in s and t to check if t is the reverse of s
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == t.charAt(t.length() - 1 - i)) {
                c++;
            }
        }

        // Check if all characters match
        if (c == s.length()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
