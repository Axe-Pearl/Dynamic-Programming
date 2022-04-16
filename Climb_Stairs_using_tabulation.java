import java.io.*;
import java.util.*;

public class Main {
    public static int solve(int n){
       int []arr = new int[n+1];
       arr[0] = 1;
       for(int i = 1;i<=n;i++){
           if(i == 1){
               arr[i] = arr[i-1];
           }
           else if(i == 2){
               arr[i] = arr[i-1]+arr[i-2];
           }
           else{
            arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
           }
       }
       return arr[n];
    }
    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        System.out.println(solve(n));
    }

}
