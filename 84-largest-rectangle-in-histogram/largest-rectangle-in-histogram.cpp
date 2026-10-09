class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> PSE(n, -1);
        vector<int> NSE(n, n);
        stack<int> stt;
        
        for (int i = 0; i < n; i++) {
            // find previous smaller element
            while (!stt.empty() && heights[stt.top()] >= heights[i]) {
                stt.pop();
            }
            if (!stt.empty()) {
                PSE[i] = stt.top();
            }
            stt.push(i);
        }
        
        // clear the stack
        while (!stt.empty()) {
            stt.pop();
        }
        
        // finding next smaller element 
        for (int i = n - 1; i >= 0; i--) {
            while (!stt.empty() && heights[stt.top()] >= heights[i]) {
                stt.pop();
            }
            if (!stt.empty()) {
                NSE[i] = stt.top();
            }
            stt.push(i);
        }
        
        // calculating the max area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = NSE[i] - PSE[i] - 1;
            int currentArea = heights[i] * width; 
            maxArea = max(maxArea, currentArea);
        } 
        
        return maxArea;
    }
};