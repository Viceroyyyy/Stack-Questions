vector<int> nextSmallestElementToLeft(int n, int a[]){
    
    vector<int>res;
    stack<int> s;
    s.push(-1);
    
    for(int i=0; i<n; i++)
    {
        while(s.top()>=a[i] && s.top()!=-1)
            s.pop();
        res.push_back(s.top());
        s.push(a[i]);
    }
    return res;
}¸
