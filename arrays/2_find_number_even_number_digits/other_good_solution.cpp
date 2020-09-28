class Solution {
public:    
    int findNumbers(vector<int>& nums) {
        // disable synchronization between c and c++ standard streams
        ios_base :: sync_with_stdio(false);
	    // just stop automatic flush after cout
        cin.tie(0);
	    // just stop automatic flush after before cin
        cout.tie(0);
        
        int count = 0;
        for (const int &n : nums) {
            if ( (10 <= n && n < 100) || (1000 <= n && n < 10000) ||
                 (100000 == n) ) {
                ++count;
            }
        }
        return count;
    }
};
