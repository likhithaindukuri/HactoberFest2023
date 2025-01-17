class Solution {
public:
    void merge(vector<int> &nums, int l, int r, int mid)
    {
        vector<int>temp(r-l+1);
        int i=l, j=mid+1;
        int k=0;
        while(i<=mid || j<=r)
        {
            if(i>mid)
            {
                temp[k]=nums[j];
                k++;
                j++;
            }
            else if(j>r)
            {
                temp[k]=nums[i];
                k++;
                i++;
            }
            else
            {
                
                if(nums[i]<nums[j])
                {
                    temp[k]=nums[i];
                    i++;
                }
                else
                {
                    temp[k]=nums[j];
                    j++;
                }
                k++;
            }
        }
        for(int m=0; m<r-l+1; m++)
        {
            nums[m+l]=temp[m];
        }

    }
    void mergeSort(vector<int> &nums, int l, int r)
    {
        if(l>=r)
        {
            return;
        }
        int mid = (l+r)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(nums, l, r, mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
    
};