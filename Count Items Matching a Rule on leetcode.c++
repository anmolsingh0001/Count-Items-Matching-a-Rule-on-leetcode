class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string ruleValue) {
        int index=-1;
        if(rulekey=="type"){
            index=0;
        }
        else if(rulekey=="color"){
            index=1;
        }
        else{
            index=2;
        }
        int result=0;
        for(int i=0; i<items.size(); i++){
            for(int j=0; j<items[i].size(); j++){
                if(j==index){
                    if(items[i][j]==ruleValue){
                        result++;
                    }
                }
            }
        }
        return result;
    }
};