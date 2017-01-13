import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            for (int k = n - i - 1; k > 0; k--) {
                System.out.print(" ");
            }
            for (int j = 0; j <= n - (n - i); j++) {
                System.out.print("#");
            }
            System.out.print("\n");
        }
    }
}
