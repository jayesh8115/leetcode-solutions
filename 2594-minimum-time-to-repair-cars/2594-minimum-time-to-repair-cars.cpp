class Solution {
public:

    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1;
        long long high = 1LL * (*min_element(ranks.begin(),ranks.end())) * cars*cars;

        while(low<=high){
            long long mid = (low+high)/2;
            long long totalCars = 0;

            for(int i=0;i<ranks.size();i++){
                totalCars += sqrt((double)mid / double(ranks[i]));
            }
            if(totalCars >= cars){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
           
        }
        return low;
    }
};