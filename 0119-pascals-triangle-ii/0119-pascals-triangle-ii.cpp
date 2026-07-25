class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long val = 1;

        row.push_back(1);

        for (int k = 1; k <= rowIndex; k++) {
            val = val * (rowIndex - k + 1) / k;
            row.push_back((int)val);
        }

        return row;
    }
};