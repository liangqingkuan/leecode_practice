/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int*runningSum=(int*)malloc(numsSize*sizeof(int));
    int a,b,i;
    runningSum[0]=nums[0];
    for(i=1;i<numsSize;i++){        runningSum[i]=runningSum[i-1]+nums[i];
    }
    return runningSum;
}