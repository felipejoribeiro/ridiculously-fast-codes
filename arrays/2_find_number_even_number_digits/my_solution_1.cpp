#include<iostream>
#include<vector>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
		
	// disable synchronization between c and c++ standard streams
        std::ios_base :: sync_with_stdio(false);
	// just stop automatic flush after cout
        std::cin.tie(0);
	// just stop automatic flush after before cin
        std::cout.tie(0);
	
        int count = 0;
        for(int i=0 ; i<int(nums.size()); i++){
            
            bool a = nums[i] > 9;
            bool b = nums[i] > 99;
            bool c = nums[i] > 999;
            bool d = nums[i] > 9999;
            bool e = nums[i] > 99999;
            
            switch( a + b + c + d + e){
                
                case 0:
                    //odd
                    break;
                case 1:
                    //even
                    count++;
                    break;
                case 2:
                    //odd
                    break;
                case 3:
                    //even
                    count++;
                    break;
                case 4:
                    //odd
                    break;
                case 5:
                    //even
                    count++;
                    break;
                default:
                    std::cout<<"Out of boundaries";
            }
            
            
        }
        return count;
    }
};
