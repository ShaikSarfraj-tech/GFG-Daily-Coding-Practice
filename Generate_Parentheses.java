import java.io.*;
import java.util.*;

class Generate_Parentheses {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t > 0) {
            int n = sc.nextInt();
            Solution T = new Solution();
            List<String> ans = T.AllParenthesis(n);
            String sequences[] = ans.toArray(new String[0]);
            Arrays.sort(sequences);
            int k = sequences.length;
            for(int i = 0; i < k; i++) {
                System.out.println(sequences[i]);
            }
            t--;
        }
    }
}

class Solution {
    
    public List<String> AllParenthesis(int n) 
    {
        List<String> list = new ArrayList<>();
        backtrack(n, 0, 0, list, "");
        return list;
    }
    void backtrack(int n, int l, int r, List<String> list, String s) {
        if(s.length() == 2*n) {
            list.add(s);
            return;
        }
        if(l < n) {
            backtrack(n, l+1, r, list, s+"(");
        }
        if(r < l) {
            backtrack(n, l, r+1, list, s+")");
        }
    }
}