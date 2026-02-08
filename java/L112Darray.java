import java.util.*;
public class L112Darray {
    public static void main(String[] args) {
        
    
    Scanner sc=new Scanner(System.in);
    int row ;
    int col;
    row =sc.nextInt();
    col=sc.nextInt();
    int [][] num=new int[row][col];
    for(int i=0;i<=row-1;i++){
        for (int j=0;j<=col;j++){
            num[i][j]=sc.nextInt();

            }
        
        }
        System.out.println("printig marix");
    for (int k =0;k<=row;k++){
        for (int l=0;l<=col;l++){
            System.out.print(num [k][l] +" ");;

            }
        System.out.println();
        }
    }
}
