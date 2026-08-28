class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(30, vector<int>(30, 0));
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    ans[i][j] = 1;
                } else {
                    ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
                }
            }
        }
        vector<vector<int>> final_ans;
        vector<int> row;
        for (int i = 0; i < numRows; i++) {
            row.clear();
            for (int j = 0; j <= i; j++) {
                row.push_back(ans[i][j]);
            }
            final_ans.push_back(row);
        }
        return final_ans;
    }
};