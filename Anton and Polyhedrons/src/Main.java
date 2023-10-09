import java.util.*;

public  class Main {

    public static void main(String[] arg) {

        Scanner sn=new Scanner(System.in);
        int n,k,v,c=0;
        String num;
        n=sn.nextInt();
        sn.nextLine();
        Map<String,Integer>map=new HashMap<>();
        map.put("Tetrahedron",4);
        map.put("Cube" ,6 );
        map.put("Octahedron"  ,8  );
        map.put("Dodecahedron",12);
        map.put("Icosahedron",20);
        for(int i=0;i<n;i++)
        {
            num= sn.nextLine();
            c+=map.get(num);
        }
        System.out.println(c);


    }}
