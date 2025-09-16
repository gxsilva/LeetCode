int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int     x;
    int     y;
    int     *pair;

    x = 0;
    y = 0;
    pair = (int *)malloc(2 * sizeof(int));
    while (x < numsSize - 1)
    {
        y = x + 1;
        while(y < numsSize)
        {
            if (nums[x] + nums[y] == target)
            {
                *returnSize = 2;
                pair[0] = x;
                pair[1] = y;
                return (pair); 
            }
            y++;
        }
        x++;
    }
    return (pair);
}