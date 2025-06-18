int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++){

        for(int j = i + 1; j < numsSize; j++){

            if(nums[j] == target - nums[i]){

                int* score = malloc(sizeof(int) * 2);
                score[0] = i;
                score[1] = j;
                *returnSize = 2;
                return score;

            }

        }

    }

    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}