import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        int alicetotal = 0;
        int bobtotal = 0;
        if (a0 > b0)
            alicetotal++;
        else if (a0 < b0)
            bobtotal++;
        if (a1 > b1)
            alicetotal++;
        else if (a1 < b1)
            bobtotal++;
        if (a2 > b2)
            alicetotal++;
        else if (a2 < b2)
            bobtotal++;
        System.out.println(alicetotal + " " + bobtotal);
    }
}
