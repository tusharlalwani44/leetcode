class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n; // Total number of elements in the n x n grid
        
        // Sum of first N numbers
        long long SN = (N * (N + 1)) / 2; 
        // Sum of squares of first N numbers
        long long S2N = (N * (N + 1) * (2 * N + 1)) / 6; 
        
        long long S = 0;
        long long S2 = 0;
        
        // Iterate through the 2D grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long long val = grid[i][j];
                S += val;
                S2 += val * val;
            }
        }
        
        // S - SN = x - y (where x is repeated, y is missing)
        long long val1 = S - SN; 
        
        // S2 - S2N = x^2 - y^2
        long long val2 = S2 - S2N; 
        
        // (x^2 - y^2) / (x - y) = x + y
        val2 = val2 / val1; 
        
        // x = ((x - y) + (x + y)) / 2
        long long x = (val1 + val2) / 2; 
        
        // y = x - (x - y)
        long long y = x - val1; 
        
        return {(int)x, (int)y};
    }
};