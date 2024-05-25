class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxm=0;
        int crnt=0;

        for(int i=0;i<gain.size();i++) {
        crnt += gain[i];
        maxm=max(maxm,crnt);
        }
        return maxm;
    }
};