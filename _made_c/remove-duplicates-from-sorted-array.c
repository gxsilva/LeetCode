void shiftElement(int *nums, int *size, int index)
{
    int     i;

    i = index;
    while (i < (*size) - 1)
    {
        nums[i] = nums[i + 1];
        i++;   
    }
    (*size)--;
}

int removeDuplicates(int* nums, int numsSize)
{
    int         x;
    int         y;

    x = 0;
    while(x < numsSize)
    {
        y = x + 1;
        while (y < numsSize)
        {
            if (nums[x] == nums[y])
                break;
            y++;
        }
        if (y != numsSize)
        {
            shiftElement(nums, &numsSize, y);
            continue ;
        }
        x++;
    }
    return (numsSize);
}