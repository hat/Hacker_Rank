import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[][] = new int[n][n];
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
            }
        }
        
        int prim_diag_sum = 0;
        int seco_diag_sum = 0;
        int diff;
        
        for (int i = 0; i < n; i++) {
            prim_diag_sum += a[i][i];
            seco_diag_sum += a[i][n - i - 1];
        }
        diff = Math.abs(prim_diag_sum - seco_diag_sum);
        System.out.println(diff);
    }
}
