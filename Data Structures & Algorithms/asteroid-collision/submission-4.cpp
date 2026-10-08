class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v1;

        for (int ele : asteroids) {

            while (!v1.empty() && v1.back() > 0 && ele < 0) {

                if (v1.back() + ele == 0) {
                    // Both explode
                    v1.pop_back();
                    ele = 0;
                    break;
                }
                else if (v1.back() + ele > 0) {
                    // Current asteroid explodes
                    ele = 0;
                    break;
                }
                else {
                    // Top asteroid explodes
                    v1.pop_back();
                }
            }

            if (ele != 0) {
                v1.push_back(ele);
            }
        }

        return v1;
    }
};