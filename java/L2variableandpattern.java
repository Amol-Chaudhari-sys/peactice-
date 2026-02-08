import java.util.* ;
public class L2variableandpattern {
    

    public static void main(String[] args) {
        // for (int i =1;i<=5;i++){
        //     for (int j=1;j<=i;j++){
        //         System.out.print(" * ");
        //     }
        //     System.out.println(); 
        // }
        for (int i=0;i<=5;i++){
            for (int j=0;j<=i;j++){
                System.out.print( " v ");
            }
            System.out.println();
        }

        float a= 101;
        int b=24;
        float c= a*b/(a-b);
        System.out.println(c);

        Scanner sc = new Scanner(System.in);
        System.out.println("enter Name");
        String name= sc.nextLine(); //nextint(),nextfloat()
        System.out.println(name);
        System.out.println("enter NO.1");

        int d = sc.nextInt();
        System.out.println("enter no.2");
        int e=sc.nextInt() ;
        System.out.println(d*e);


    }  
}
