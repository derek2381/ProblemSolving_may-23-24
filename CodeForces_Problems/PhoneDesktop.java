// problem link
// https://codeforces.com/contest/1974/problem/A

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- >0){
            int x = sc.nextInt();
            int y = sc.nextInt();

            int res = Math.max((y+1)/2, (4*y + x + 14)/15);

            System.out.println(res);
        }
    }
}
