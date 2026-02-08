import java.util.Scanner;

public class L8excersise {
    public static int Aver(int a,int b,int c){
            System.out.println((a+b+c)/3);
            return (a+b+c)/3;
        }
    public static int sumofn (int n){
        int sum =0;
        for(int i=0;i<=n;i++){
            sum =sum+i;
        }
        System.out.println(sum);
        return sum;   
    }
    public static int grater(int a,int b){
        if (a==b){
            System.out.println("both are equal ");
            return a;
        }
        else if (a>b){
            System.out.println("a is grater ");
            return a;
        }
        else {
            System.out.println("B is grater ");
            return b;
        }
    }
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter A :");
        int a=sc.nextInt();
        System.out.println("Enter B: ");
        int b=sc.nextInt();
        System.out.println("Enter c ");
        int c =sc.nextInt();

        Aver(a,b,c);
        sumofn(a);
        grater(a,b);

    }
    
}
