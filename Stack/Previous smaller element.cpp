vector<int> Solution::prevSmaller(vector<int> &A) {
   /* stack<int> st;
    st.push(A[0]);
    vector<int> g;
   
    g.push_back(-1);
    for(int i = 1;i<A.size();i++){
        if(st.top()<A[i]){
            g.push_back(st.top());
            st.push(A[i]);
        }
        else{
           while(!st.empty() && st.top()>= A[i]){
               st.pop();
           }
               if(st.empty() ){
                    g.push_back(-1);
               }
               else{
                    g.push_back(st.top());
               }
                 
                 st.push(A[i]);
        }
    }
   
   
   
    return g;*/
    vector<int>g;
    stack<int>st;
    g.push_back(-1);
    st.push(A[0]);
    int n=A.size();
    for(int i=1;i<n;i++){
        if(st.top()<A[i]){
            g.push_back(st.top());
            st.push(A[i]);
        }
        else{
           while(!st.empty() && st.top()>=A[i]){
               st.pop();
           }
           if(st.empty())g.push_back(-1);
           else {
               g.push_back(st.top());
           }
           st.push(A[i]);
            
        }
    }
   return g;
}
