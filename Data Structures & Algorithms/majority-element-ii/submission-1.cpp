class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) { 
        if(nums.size()==0){
            return {};
        }
        vector<int> v1;
        int n = nums.size();
        int count_1 = 0;
        int count_2 = 0;
        int cad = 0;
        int cad2 = 0;
        for (auto x : nums){
           if(x==cad && count_1>0){
              count_1++;
           }
           else if(x==cad2 && count_2>0){
            count_2++;
           }
           else if (count_1==0){
           cad = x;
           count_1 = 1;
          }
          else if(count_2==0){
            cad2=x;
            count_2 = 1;
          }

          else {
            count_1--;
            count_2--;
          }
        }
          count_1 =0;
          count_2 =0;
         for(auto x:nums){
            if(x==cad){
                count_1++;
            }
            if(x==cad2){
                count_2++;
            }
                       }

         if(count_1>n/3){
            v1.push_back(cad);
         }
         if(count_2>n/3){
            v1.push_back(cad2);
         }

         return v1;
        }
    };