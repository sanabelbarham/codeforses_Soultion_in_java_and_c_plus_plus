import java.util.*;
public  class Main {
    public static void main(String[] arg) {
        Scanner sn = new Scanner(System.in);
        int t,n;
        String s;
        t=sn.nextInt();
        for(int i=0;i<t;i++){
            n=sn.nextInt();
            Stack<Character>stack=new Stack<>();
            Map<Character,Integer> map=new HashMap<>();
            sn.nextLine();
            s=sn.nextLine();
            int count=0;
            for(char c:s.toCharArray()) {
                if (stack.empty())
                {
                    stack.add(c);
                    map.put(c,1);
                }
                else{
                    if(stack.peek()==c)
                        stack.add(c);
                    else{
                        stack.add(c);
                        if (!map.containsKey(c))
                            map.put(c, 1);
                        else {
                            //  System.out.println("NO");
                            count = -1;
                            break;
                        }
                    }
                }
            }
            if(count!=-1)
                System.out.println("YES");
            else System.out.println("NO");
        }
    }}