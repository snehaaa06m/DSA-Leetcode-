class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int j = 0;
        sort(candyType.begin(),candyType.end());
        for (int i = 1; i < n; i++) {
            if (candyType[i] != candyType[j]) {
                swap(candyType[i], candyType[j + 1]);
                j++;
            }
        }
        return min(n/2,j+1);
    }
};