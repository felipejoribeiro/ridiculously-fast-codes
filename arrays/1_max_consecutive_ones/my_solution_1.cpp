#include <iostream>
#include <vector>


class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
	    // disable synchronization between c and c++ standard streams
        std::ios_base :: sync_with_stdio(false);
	    // just stop automatic flush after cout
        std::cin.tie(0);
	    // just stop automatic flush after before cin
        std::cout.tie(0);
	    // Some variables
        int count = 0 , max = 0 , l = nums.size();
        
        for( int i = 0 ; i < l ; i++){
            if(nums[i]){
                count++;
            }else{
                // having this in the else statement prevents the code from running this if statement positive case a bunch of times.
                if(count > max){max = count;}
                count = 0;
            }
        }
	// This is necessary for cases where the last item is an one.
        if(count > max){max = count;}
        return max;
    }
};
