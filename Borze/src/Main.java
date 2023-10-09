import java.util.*;
public  class Main {
    public static void main(String[] arg) {
        Scanner sn = new Scanner(System.in);
        String s, k=null;
        s = sn.nextLine();
        Map<String, Integer> map = new HashMap<>();
        map.put(".", 0);
        map.put("-.", 1);
        map.put("--", 2);
        char[] arr = s.toCharArray();
        for (int i = 0; i < arr.length; ) {
            if (arr[i] == '.') {
                System.out.print(map.get(String.valueOf (arr[i]) ) );
                i++;
            }
            else {
                StringBuilder stringbuilder=new StringBuilder();
                String result =null;
                if (arr[i + 1] == '.') {
                    stringbuilder.append(arr[i]);
                    stringbuilder.append(arr[i+1]);
                    result=stringbuilder.toString();
                    System.out.print(map.get(result));
                    i += 2;
                }
                else {
                    stringbuilder.append(arr[i]);
                    stringbuilder.append(arr[i+1]);
                    result=stringbuilder.toString();
                    System.out.print(map.get(result));
                    i += 2;
                }
            }


        }

    }
}