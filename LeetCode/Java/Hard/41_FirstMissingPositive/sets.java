class Solution {
    public int firstMissingPositive(int[] nums) {
        HashSet<Integer> set = new HashSet<Integer>();
        int counter = 1;
        for(int num : nums)
            set.add(num);
        while(set.contains(counter))
            counter++;
        return counter;
    }
}