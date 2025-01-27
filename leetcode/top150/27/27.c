int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    int i = 0;
    while (i < numsSize)
    {
        if (nums[i] != val)
            k++;
        i++;
    }

    i = 0;
    int size = numsSize - 1;
    while (i < numsSize)
    {
        if (nums[i] == val)
        {
            int found = 1;
            while (found && size)
            {
                if (nums[size] != val)
                {
                    nums[i] = nums[size];
                    found = 0;
                }
                size--;
            }
        }
        i++;
    }

    return k;
}
