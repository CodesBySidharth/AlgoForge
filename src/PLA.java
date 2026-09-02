//                       WEIGHTED SUBSTRING
import java.util.*;
public class PLA{
public HashSet<String> weightdUniqueSubstring(String S, String m, int k){
    HashSet<String> set= new HashSet<>();
    int weight;
    String strtemp;
    for(int i=0; i<S.length(); i++){
        weight=0;
        strtemp="";
        int count=i;
        while(weight<=K && count <S.length()){
            weight+=M.charAt(S.charAt(count)-'a')-'0';
            strtemp+=S.charAt(count);
            count++;
            char c[]=strtemp.tocharArray();
            Arrays.sort(c);
            if (weight<=K){
                set.add(String.valueOf(c));
            }
        }
    }
    return set;
}
    public static void main(String[] args){
          Scanner sc = new Scanner(System.in);

        String S = sc.next();
        String M = sc.next();
        int K = sc.nextInt();

        HashSet<String> result = weightedUniqueSubstring(S, M, K);
         System.out.println(result);
         sc.close();
    } }
//now it dependson the question whether the charactere will be asked to print or the size. If size asked so do this=> set.size

// 1) Two pointers
2) Sliding wndows
3)
Kalan's maximum sum subarray
4)suffix/prefix sum
5)modified binary search
6)monotonic stack/queue
7) fas & slow pointeres
8) breadth first search, depth first search
9) greedy(for all)
10)Djikshow's algorithm(based on graphs)
11)Dynamic problem belwo written two 
memorization(Top down approach)   Tabulation(bottom up approach)
12)