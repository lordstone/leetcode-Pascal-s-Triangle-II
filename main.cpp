class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> tmp(rowIndex+1,0);
        tmp[0] = 1;
        for(int i = 1; i <= rowIndex ; i ++){
            int lastOne = 1;
            for(int j = 1; j < i + 1; j++){
                int thisOne = tmp[j];
                tmp[j] = thisOne + lastOne;
                lastOne = thisOne;
            }//end for j
        }//end for i
        return tmp;
    }
};
