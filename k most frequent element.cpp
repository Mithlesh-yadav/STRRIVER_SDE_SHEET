class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto [a,b]:mp){
            pq.push({b,a});
        }
        while(k){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};

 
