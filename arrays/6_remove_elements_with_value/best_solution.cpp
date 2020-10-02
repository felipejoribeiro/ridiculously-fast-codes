class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int c = 0 ; 
        
        for(auto it=nums.begin(); it!=nums.end(); it++)
        {
            if(val == *it) 
            {
                nums.erase(it);
                it--;
            }
        }
        
        return nums.size();
    }
};
