class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        stack<int> s1;
        vector<int> result(size);

        s1.push(0);
        for(int i = 1; i<temperatures.size(); i++){
           int temp = temperatures[i];
           while(!s1.empty() && temp>temperatures[s1.top()]){
            result[s1.top()] = i-s1.top();
            s1.pop();
           }
           s1.push(i);
        }
      return result;
    }
};
