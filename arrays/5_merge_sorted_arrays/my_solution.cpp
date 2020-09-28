class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // disable synchronization between c and c++ standard streams
        ios_base :: sync_with_stdio(false);
	// just stop automatic flush after cout
        cin.tie(0);
	// just stop automatic flush after before cin
        vector<int> buffer(m+n);
        int n1 = 0;
        int n2 = 0;
        int i = 0;
        for( i ; n2 < n ; i++){
             if(nums1[n1] < nums2[n2] && n1 < m){
                 buffer[i] = nums1[n1];
                 n1++;
             }else{
                 buffer[i] = nums2[n2];
                 n2++;
             }
        }
        for(i ; n1 < m ; i++){
            buffer[i] = nums1[n1];
            n1++;
        }
        for(int ii = 0 ; ii < m + n ; ii++){
            nums1[ii] = buffer[ii];
        }

    }
};
