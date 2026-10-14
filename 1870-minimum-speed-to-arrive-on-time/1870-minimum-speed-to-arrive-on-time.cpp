class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 10000000;
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;
            double Totaltime = 0;

            for(int i=0;i<dist.size();i++){
                double time = ((double)dist[i]/mid);

                if(i != dist.size()-1){
                    Totaltime += ceil(time);
                }
                else{
                    Totaltime += time;
                }
            }

            if(Totaltime <= hour){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};