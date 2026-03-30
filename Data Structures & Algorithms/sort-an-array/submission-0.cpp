class Solution {
public:

    int pivot(vector<int>& nums,int low,int high){
        int i = low-1;
        int pivot = nums[high];
        for(int j = low; j<high; j++){
            if(nums[j]<=pivot){
                i++;
                swap(nums[j],nums[i]);
            }

        }
      swap(nums[i+1],nums[high]);
      return i+1;
    }

    void quicksort(vector<int>&nums,int low, int high){
        if(low>=high){
            return;
        }
        int pi = pivot(nums,low,high);
        quicksort(nums,low,pi-1);
        quicksort(nums,pi+1,high);
        
        
    }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        quicksort(nums,low,high);
        return nums;
    }


};