#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    int min_index = min_element(arr.begin(), arr.end()) - arr.begin();
    arr.erase(arr.begin() + min_index);
    return arr;
}