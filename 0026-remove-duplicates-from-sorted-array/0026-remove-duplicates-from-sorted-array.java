class Solution {
    public int removeDuplicates(int[] nums) {
       int n=nums.length;
       int i=1,j=1;
       for(i=1;i<n;i++) {
        if(nums[i]!=nums[j-1])
           nums[j++]=nums[i];   //j is only incrementing if not equal

       }
    return j ;
    }
}