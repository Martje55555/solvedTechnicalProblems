/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
    let answer = [];
    
    for(let i in nums) {
        for(let j in nums) {
            if(i !== j && nums[i] + nums[j] === target) {
                answer.push(i);
                answer.push(j);
                return answer;
            }
        }
    }
    return answer;
};