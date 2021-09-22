class Solution {
    public void reverseString(char[] s) {
        int start = 0;
        int end = s.length-1;
        
        while(start < end) {
            char temp = s[start];
            char temp2 = s[end];
            s[start] = temp2;
            s[end] = temp;
            start++;
            end--;
        }
    }
}