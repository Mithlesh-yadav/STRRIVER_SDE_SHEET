class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        /*TLE solutoin 
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<=n-k;i++){
            int mx=nums[i];
            for(int j=1;j<k;j++){
                if(nums[i+j]>mx)mx=nums[i+j];
            }
            ans.push_back(mx);
        }
        return ans;*/
           std::vector<int> result;
    std::deque<int> window; // Store indices of elements in the current window

    for (int i = 0; i < nums.size(); ++i) {
        // Remove elements from the front of the deque that are outside of the window
        while (!window.empty() && window.front() <= i - k)
            window.pop_front();

        // Remove elements from the back of the deque that are smaller than the current element
        while (!window.empty() && nums[window.back()] < nums[i])
            window.pop_back();

        // Add the current index to the deque
        window.push_back(i);

        // Add the maximum element in the current window to the result
        if (i >= k - 1)
            result.push_back(nums[window.front()]);
    }

    return result;
    }
};
