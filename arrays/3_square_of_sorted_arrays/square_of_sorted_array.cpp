// ? -- 124/132
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int proceed = 1;
        vector<int> B(A.size()); 
        int count = 0;
        for(int i = 0; i < A.size(); i++){
                A[i] = A[i] * A[i];
            }
        
        while(proceed){
            int min = 10001 * 10001;
            int min_index = 0;
            for(int i = count; i < A.size(); i++){

                if( A[i] < min ){
                    min = A[i];
                    min_index = i;
                }
            }
            B[count] = min ;
            // cout<< min*min << " " << min << endl;
            count++; 
            for(int i = count; i < min_index + 1; i++){
                B[i] = A[i - 1];
            }
            for(int i = min_index + 1; i < A.size(); i++){
                B[i] = A[i];
            }
            
            if(count >= A.size()){
                proceed = 0;
            }
            
            for(int i = 0; i < A.size(); i++){
                A[i] = B[i];
            }
            
        }
        return B;
    }
};
