class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size() - 1;

        int low, high;
        int count = 0;
        int cl_index = 0;
        bool found = false;

        vector<int> result;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                cl_index = mid;
                found = true;
                break;
            }

            if (arr[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }

        
        if (found) {
            low = cl_index;
            high = cl_index + 1;
        } else {
            low = right;
            high = left;
        }

        while (count < k) {

            if (low < 0) {
                result.push_back(arr[high]);
                high++;
            }
            else if (high >= arr.size()) {
                result.insert(result.begin(), arr[low]);
                low--;
            }
            else if (abs(arr[low] - x) <= abs(arr[high] - x)) {
                result.insert(result.begin(), arr[low]);
                low--;
            }
            else {
                result.push_back(arr[high]);
                high++;
            }

            count++;
        }

        return result;
    }
};