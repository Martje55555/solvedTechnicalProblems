class Solution {
    public void moveZeroes(int[] nums) {
        // if size is 1, return
        if(nums.length == 1) return;
        
        // keeps count of amount of non zero nums
        int count = 0;
        // place non zero nums in array, starting at position 0
        // ex. count is 0, nums[0,1,0,3,12], num 1 will be moved to nums[count]
        // count is incremented, num 3 will be moved to nums[count] where count
        // is now 1. REPEAT till end of array
        // nums should then be [1,3,12, 3, 12] and count = 3;
        for(int num : nums) {
            if(num != 0) {
                nums[count] = num;
                count++;
            }
        }
        // include remaining zeros starting at position count
        // array should then be [1,3,12,0,0]
        for(int i = count; i < nums.length; i++) {
            nums[i] = 0;
        }
    }
}