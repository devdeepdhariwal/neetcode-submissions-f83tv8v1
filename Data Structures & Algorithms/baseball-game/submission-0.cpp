class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v1;
        int sum = 0;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i]=="+"){
                if(v1.size()>=2){
                    int lastel = v1[v1.size()-1];
                    int lastse = v1[v1.size()-2];
                    v1.push_back(lastel+lastse);
                }
            }
            else if(operations[i]=="C"){
                if(v1.size()>=1){
                    v1.pop_back();
                }
            }
            else if(operations[i]=="D"){
                if(v1.size()>=1){
                    int lst = v1[v1.size()-1];
                    v1.push_back(lst*2);
                }
            }
            else{
                v1.push_back(stoi(operations[i]));
            }
        }
          
        for(int j = 0; j<v1.size(); j++){
            sum+=v1[j];
        }
     return sum;
    }
};