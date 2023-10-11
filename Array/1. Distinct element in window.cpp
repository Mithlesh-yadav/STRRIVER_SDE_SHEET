vector<int> Solution::dNums(vector<int> &A, int B) {
       unordered_map<int,int>mp;
    for(int i=0;i<B;i++){
        mp[A[i]]++;
    }
    vector<int>ans;
    ans.push_back(mp.size());
    int left=0;
    for(int i=B;i<A.size();i++){
        mp[A[left]]--;
        if(mp[A[left]]==0)
        mp.erase(A[left]);
        left+=1;
        mp[A[i]]++;
        ans.push_back(mp.size());
    }
    return ans;
}
