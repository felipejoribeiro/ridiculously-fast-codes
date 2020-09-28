class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int arr_size = arr.size();
        vector<int> buffer(arr.size());
        int buffer_write = 0;
        int buffer_read = 0;
        
        for(int i = 0 ; i < arr_size ; i++){
            buffer[buffer_write] = arr[i];
            buffer_write ++;
            
            if(buffer_write >= arr_size){
                
                for(int ii = i; ii < arr_size; ii++){
                    arr[ii] = buffer[buffer_read];
                    buffer_read++;
                }
                break;
            }
            
            if(arr[i] == 0){
                buffer[buffer_write] = 0;
                buffer_write ++;
            }
            
            if(buffer_write >= arr_size){
                
                for(int ii = i; ii < arr_size; ii++){
                    arr[ii] = buffer[buffer_read];
                    buffer_read++;
                }
                break;
            }
            
            arr[i] = buffer[buffer_read];
            buffer_read ++;
        }
        
    }
};
