import javax.swing.*;
import java.util.*;
public class Main {
    public static void main(String[]arg) {

        Stack<Character> stack = new Stack<>();
        String s = "";
        Scanner sn = new Scanner(System.in);
        int n=sn.nextInt();
        sn.nextLine();
        s = sn.nextLine();
        int c = 0;
        char sa[] = s.toCharArray();
        for (int i = 0; i < n; i++) {
            if(stack.empty())
            {
                stack.push(sa[i]);
            }
            else {
                if(stack.peek()==sa[i]) {
                    c++;
                    // stack.pop();
                    stack.push(sa[i]);

                }
                else
                    stack.push(sa[i]);

            }


        }
        System.out.println(c);
    }}

