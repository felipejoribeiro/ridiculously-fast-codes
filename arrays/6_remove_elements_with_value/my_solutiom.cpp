class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        int a = 0;
        int i;
        for(i = 0 ; a < l ; a++){
            if(nums[a] != val){
                nums[i] = nums[a];
                i++;
            }
        }
        
        return i;
    }
};
