bool NoZero(int x){
    while(x>0){
        if(x%10 == 0)
        return false;
        x = x/10;
    }
    return true;
}
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int a,b;
            a = i;
            b = n-a;
            if(NoZero(a) && NoZero(b)){
                return {a,b};
            }
            
        }
        return {};
    }
};
