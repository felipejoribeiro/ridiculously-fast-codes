class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count {};
        int n {static_cast<int>(arr.size())};
        for (auto n : arr) if (n == 0) ++count;
        for (int i {n-1}; i >= 0 && count > 0; --i) {
            if (i + count < n) arr[i + count] = arr[i];
            if (arr[i] == 0 && --count + i < n) arr[count + i] = 0;
        }
    }
};
