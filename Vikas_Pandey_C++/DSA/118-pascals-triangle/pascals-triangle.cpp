class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        for (int i = 0; i < numRows; i++) {
            // Each row starts with 'i + 1' elements, all initialized to 1
            vector<int> row(i + 1, 1);
            
            // Fill the internal elements (between the first and last 1s)
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            triangle.push_back(row);
        }
        
        return triangle;
    }
};