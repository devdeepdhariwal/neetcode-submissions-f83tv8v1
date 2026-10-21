class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map <string,vector<pair<int,string>>> m1;
    
    void set(string key, string value, int timestamp) {
        m1[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it = m1.find(key);
        if(it == m1.end() ){
            return "";
        }
        vector <pair<int,string>>& vec = it->second;
        int size = vec.size();
        if(timestamp<vec[0].first){
            return "";
        }
        if(timestamp>vec[size-1].first){
            return vec[size-1].second;
        }

        int low = 0;
        int high = size-1;
        int ans = 0;
        while(low<=high){
            int mid = (high+low)/2;
            if(vec[mid].first<=timestamp){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return vec[ans].second;
    }

};
