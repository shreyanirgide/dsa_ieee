int minMoves(int* nums, int numsSize) {
   int max=nums[0];
   int count=0;
   for(int i=0;i<numsSize;i++) {
if(max<nums[i])
    max=nums[i];
   }
for(int i=0;i<numsSize; i++){
    if(nums[i]==max){
        continue;
    }
    else {
    count+=(max-nums[i]);
    }
}
return count;
}