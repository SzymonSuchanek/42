int	removeDuplicates(int *nums, int numsSize)
{
	int	i;
	int	k;
	if (numsSize == 0)
		return 0;
	i=0;
	k=1;
	while (i<numsSize){
		if(nums[i]!=nums[k-1]){
			nums[k]=nums[i];
			k++;
		}
		i++;
	}
	return k;
}
