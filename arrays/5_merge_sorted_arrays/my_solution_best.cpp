class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n1 = m - 1;
        int n2 = n - 1;
        int i = m + n - 1;
        for( i ; n2 > -1 && n1 > -1; i--){
             if(nums1[n1] > nums2[n2]){
                 nums1[i] = nums1[n1];
                 n1--;
             }else{
                 nums1[i] = nums2[n2];
                 n2--;
             }
        }
        for(i ; n1 > -1 ; i--){
            nums1[i] = nums1[n1];
            n1--;
        }
        for(i ; n2 > -1 ; i--){
            nums1[i] = nums2[n2];
            n2--;
        }
    }
};
