/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

      public class Solution extends VersionControl {
        public int firstBadVersion(int n) {
            if(n == 1) return n;
            int left = 1, right = n, mid, bad = 0;
            
            while(left <= right) {
                mid = left + (right - left) / 2;
                if(isBadVersion(mid)) {
                    right = mid-1;
                } else {
                    left = mid+1;
                }
            }
            return left;
            
        }
    }