#include <string>
#include <algorithm>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (n >= 1 && n <= 8000000000)
    {
        string  str;
        vector<long long> vec;
        str = to_string(n);

        
        for (char c : str)
        {
            vec.push_back(c - '0');
        }
        
        sort(vec.begin(), vec.end(), greater<long long>());

        for (const auto& i : vec)
        {
            answer *= 10;
            answer += i;
            
        }
    }
    return answer;
}