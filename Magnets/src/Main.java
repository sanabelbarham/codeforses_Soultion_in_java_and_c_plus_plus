import java.util.*;

public  class Main {

    public static void main(String[] arg) {
        int n,test,c=0;
        Scanner sn=new Scanner(System.in);
        n=sn.nextInt();
        Stack<Integer>stack=new Stack<>();
        for(int i=0;i<n;i++)
        {
            test=sn.nextInt();
            if(stack.empty()) {
                stack.push(test);
                c++;
            }
            else
            {
                if(stack.peek()==test)
                    stack.push(test);
                else
                {
                    stack.push(test);
                    c++;
                }
            }
        }
        System.out.println(c);



    }
}

