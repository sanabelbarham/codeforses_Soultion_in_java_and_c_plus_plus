import java.util.*;

public  class Main {

    public static void main(String[] arg) {
        Stack<Integer> stack=new Stack<>();
        stack.push(-2);
        int n,num,c=0;
        Scanner sn=new Scanner(System.in);
        n=sn.nextInt();
        for(int i=0;i<n;i++)
        {
            num=sn.nextInt();
            //stack.push(num);
            if(num>=1)
                stack.push(num);
            else {
                if ( stack.peek() == -2)
                    c++;
                else
                if((stack.peek())-1==0)
                    stack.pop();
                else {
                    int value=stack.peek();
                    stack.pop();
                    stack.push(value - 1);
                }

            }
        }
        System.out.println(c);


    }


}

