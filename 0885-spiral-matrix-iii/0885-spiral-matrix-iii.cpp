class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;

        //Store all starting cell
        ans.push_back({rStart,cStart});

        //Directions: right,down,left,up
        vector<pair<int, int>> direction = {
            {0,1},
            {1,0},
            {0,-1},
            {-1,0}
        };

        int len = 1;
        int d = 0;

        while(ans.size() < rows * cols){
            //Every step lenght is repeated twice
            for(int repeat=0;repeat<2;repeat++){

                //Move len step
                for(int step=0;step<len;step++){
                    rStart += direction[d].first;
                    cStart += direction[d].second;

                    //Store only if inside grid
                    if(rStart >= 0 && rStart < rows &&
                       cStart >= 0 && cStart < cols){

                        ans.push_back({rStart,cStart});
                       }
                }
                //Change direction
                d = (d + 1) % 4;
            }

            //Increase step lenght
            len++;

        }
        return ans;
    }
};