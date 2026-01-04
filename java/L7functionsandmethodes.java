import java.util.*;

public class L7functionsandmethodes {
       public static int sum(int a,int b){
        System.out.println(a+b);
    return a+b;
    }
    public static int prod(int a,int b){
        System.out.println(a*b);
        return a*b;
    }
    public static int fact (int n){
        int pro=1;
       for (int i=n;i>=1;i--){
        pro =pro*i;
       }
       System.out.println(pro);
       return (pro);

    }

    public static void main(String[] args) {
     
        
        Scanner sc =new Scanner(System.in);
        System.out.println("enter A :");
        int a=sc.nextInt();
        System.out.println(" Enter B :");
        int b=sc.nextInt();
        sum(a,b);
        prod(a,b);
        System.out.println(fact (a));
        

        
    }
    
}
