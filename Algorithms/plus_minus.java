import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        float pos = 0;
        float neg = 0;
        float zero = 0;
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        for(int arr_i=0; arr_i < n; arr_i++){
            if (arr[arr_i] == 0)
                zero++;
            else if (arr[arr_i] > 0)
                pos++;
            else
                neg++;
        }
        System.out.println(pos / arr.length);
        System.out.println(neg / arr.length);
        System.out.println(zero / arr.length);
    }
}
