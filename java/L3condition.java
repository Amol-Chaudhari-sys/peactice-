import java.util.*;
public class L3condition {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        // System.out.println("enter age :");
        // int age=sc.nextInt();
        
        // if (age >=18){
        //     System.out.println("adult ");
        // }
        // else{
        //     System.out.println("not adult");
        // }
        // if (age%2==0){
        //     System.out.println("even");

        // }
        // else{
        //     System.out.println(" odd ");
        // }
        // System.out.println("enter A ");
        // int a =sc.nextInt();
        // System.out.println("Enter B");
        // int b= sc.nextInt();

        // if (a==b){
        //     System.out.println("equility");
        // }
        // else if (a>b){
        //     System.out.println("a is grater ");
        // }
        // else{
        //     System.out.println("B is gratter");
        // }
        // switch (a) {
        //     case 1:System.out.println(  " hello ");
                
        //         break;
        //     case 2:System.out.println("world");
        //         break;
        //     case 3 :System.out.println("swa");
        //         break;

        
        //     default:System.out.println("invelid input ");
        //         break;
        // }
        System.out.println("enter first ");
        int a=sc.nextInt();
        System.out.println("Enter second :");
        int b =sc.nextInt();
        System.out.println("Enter symbol :");
        int g =sc.nextInt();


        switch (g ){
            case 1 :System.out.println(a+b);
            break;
            case 2: System.out.println(a*b);
            break;
            case 3:System.out.println(a-b);
            break;
            case 4 :System.out.println(a/b);
            break;
            default:System.out.println("envalid input");
            break;

        }


        
    }
    
}
