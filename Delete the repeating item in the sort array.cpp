int removeDuplicates(int* nums, int numsSize) {
    int j = 1;
    if(numsSize==0)
    {
        j = 0;
        return j;
    }
        
    for(int i = 0;i<numsSize-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[j] = nums[i+1];
            j++;
        }
       
    }
    numsSize = j;
    return j;
}