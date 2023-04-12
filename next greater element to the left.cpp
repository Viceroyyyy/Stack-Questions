void nextGreaterElementLeft(vector<int> &vec){
int size = vec.size();

stack s;
vector <int>ans;
for(int i = 0; i &l; size; i++){
	if(s.empty()){
      	s.push(vec[i]);
    	ans.push_back(-1);
    } else if(s.top() &gt; vec[i]){
        ans.push_back(s.top());
        s.push(vec[i]);
    }else{
    	while(!s.empty()){
        	if(s.top() &gt; vec[i]){
              	ans.push_back(s.top());
        		s.push(vec[i]);
              	break;
            }
          	s.pop();
        }
      	if(s.empty()){
          	s.push(vec[i]);
        	ans.push_back(-1);
        }
    }
}

vec = ans;

}
