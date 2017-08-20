/*
Follow up for "Unique Paths":

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and empty space is marked as 1 and 0 respectively in the grid.

For example,

There is one obstacle in the middle of a 3x3 grid as illustrated below.
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        int dp[m+1][n+1];
        for(int i=0;i<=n;i++)
            dp[1][i]=1;
        for(int i=0;i<=m;i++)
            dp[i][1]=1;
        for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                else
                    dp[i][j] = 0;
            }
        }
        return dp[m][n];
    } 
};
