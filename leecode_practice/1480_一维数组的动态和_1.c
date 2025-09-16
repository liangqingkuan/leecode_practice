/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int*runningSum=(int*)malloc(numsSize*sizeof(int));
    int b,i;
    for(i=0;i<numsSize;i++){
        runningSum[i]=0;
        for(b=0;b<i+1;b++){
        runningSum[i]+=nums[b];
        }
    }
    return runningSum;
}