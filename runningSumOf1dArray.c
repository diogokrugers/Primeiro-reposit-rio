/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i;
    
        for( i = 1; i < numsSize; i++){
        nums[i] = nums[i] + nums[i-1];
    }

    int* runningSum = malloc(sizeof(int) * numsSize);

    for (i = 0; i < numsSize; i++) {
        runningSum[i] = nums[i];
    }

    *returnSize = numsSize;
    return runningSum;
}