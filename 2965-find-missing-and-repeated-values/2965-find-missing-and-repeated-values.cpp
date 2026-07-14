class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        long long n = grid.size();
        long long N = n * n;

        long long sn = (N * (N + 1)) / 2;
        long long sn2 = (N * (N + 1) * (2 * N + 1)) / 6;

        long long s = 0, s2 = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                long long val = grid[i][j];
                s += val;
                s2 += val * val;
            }
        }

        long long val1 = s - sn;       
        long long val2 = s2 - sn2;     

        val2 = val2 / val1;

        long long x = (val1 + val2) / 2;  
        long long y = x - val1;           

        return {(int)x, (int)y};
    }
};
