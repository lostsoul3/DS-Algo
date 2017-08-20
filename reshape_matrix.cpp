/*
In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.

You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix. 
*/

c++

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        if(r*c!=m*n)
            return nums;
        vector<vector<int>> reshape(r, vector<int>(c, 0));
        for(int i=0;i<r*c;i++)
        {
            reshape[i/c][i%c] = nums[i/n][i%n];
        }
        return reshape;
    }
};
