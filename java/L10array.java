import java.util.*;
public class L10array {
    public static void main(String[] args) {
        int n=5;
        int arr2 []=new int[n];
        int [] arr=new int [n];
        int arr3 [] = {11,2,3,4,5};
        for (int i =0;i<=n-1;i++){
            arr2[i]= i+1;

        }
        for (int j=0;j<=n-1;j++){
            System.out.println(arr2[j]);
        }
        System.out.println(arr[0]);
        System.out.println(arr[1]);
        System.out.println(arr2[2]);
        System.out.println(arr3[3]);

        int num[]={1, 2,3,4,5,6,7,8,9};
        int x;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter no for search");
        x=sc.nextInt();
        for (int i=0;i<=num.length;i++){
            if (num [i]==x){
                System.out.println(i+1 );

            }
            else {
                System.out.println("not found");
            }
        }
    }
}
