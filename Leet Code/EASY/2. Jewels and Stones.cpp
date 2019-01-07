/* https://leetcode.com/problems/jewels-and-stones/submissions/ */
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        int Map[100]={0};
        for(int i=0;i<J.size();i++){
            Map[J[i]-'A']++;
        }
        for(int i=0;i<S.size();i++){
            if(Map[S[i]-'A']!=0){
                count++;
            }
        }
        return count;
    }
};