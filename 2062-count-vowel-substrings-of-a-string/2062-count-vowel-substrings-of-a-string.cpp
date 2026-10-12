class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int cnt = 0;
        int left = 0;

        int last[5] = {-1,-1,-1,-1,-1};

        for(int i=0;i<n;i++){
            //If consonant -> start new vowel-segment only
            if(word[i]!='a'&&
                word[i]!='e'&&
                word[i]!='i'&&
                word[i]!='o'&&
                word[i]!='u'){
                    left = i+1;

                    last[0] = -1;
                    last[1] = -1;
                    last[2] = -1;
                    last[3] = -1;
                    last[4] = -1;

                    continue;
                }

                //Update the last occurence
                if(word[i]=='a'){
                    last[0]=i;
                }else if(word[i]=='e'){
                    last[1]=i;
                }else if(word[i]=='i'){
                    last[2]=i;
                }else if(word[i]=='o'){
                    last[3]=i;
                }else if(word[i]=='u'){
                    last[4]=i;
                }

                //Check whether all vowels are appear
                if(last[0]!=-1 &&
                    last[1]!=-1 &&
                    last[2]!=-1 &&
                    last[3]!=-1 &&
                    last[4]!=-1){
                        int first = min({
                            last[0],
                            last[1],
                            last[2],
                            last[3],
                            last[4],
                        });

                        cnt += first-left+1;
                    }



            
        }
        return cnt;

        


    }
};