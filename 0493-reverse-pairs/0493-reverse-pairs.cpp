class Solution {
public:
    int cnt = 0; // declare globally
    void merge(vector<int>&arr,int low,int mid,int high){
        int left = low;
        int right = mid + 1;

        vector<int>temp;

        while(left<=mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            arr[i] = temp[i-low];
        }
    }

    int CountPair(vector<int>&arr,int low,int mid,int high){
    
        int right = mid + 1;
        int cnt = 0;
        

        for(int i=low;i<=mid;i++){
            while(right <= high && (long long)arr[i] > 2LL * arr[right]){
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
        
    }

    int mergeSort(vector<int>&arr,int low,int high){
        
        if(low>=high){
            return 0;
        }

        int mid = (low + high) / 2;
        

        mergeSort(arr,low,mid);

        mergeSort(arr,mid+1,high);

        cnt += CountPair(arr,low,mid,high);

        merge(arr,low,mid,high);

        return cnt;
    }

    
    int reversePairs(vector<int>& nums) {

        
        int n = nums.size();

        mergeSort(nums,0,n-1);

        return cnt;
       
    }
};